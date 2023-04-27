#include "commands/commands.h"
#include "hermes/config.h"
#include "hermes/status.h"
#include "mem/mem.h"
#include "util/log.h"
#include "util/time.h"
#include <elf.h>
#include <stdio.h>
#include <string.h>
#include <sys/time.h>

uint64_t
delilah_command_execute(struct delilah_thread_t* thread,
                        struct hermes_cmd_req* req, struct hermes_cmd_res* res,
                        struct delilah_t* delilah)
{
  char* errmsg;
  uint64_t ret;
  int32_t rv;
  char elf;

  double invalidation, loading, execution, flushing;
  struct timeval start;

  uint8_t prog_slot = req->run_prog.prog_slot;
  uint8_t data_slot = req->run_prog.data_slot;
  uint32_t prog_len = req->run_prog.prog_len;

  uint32_t invalidation_size = req->run_prog.invalidation_size;
  uint32_t invalidation_offset = req->run_prog.invalidation_offset;
  uint32_t flush_size = req->run_prog.flush_size;
  uint32_t flush_offset = req->run_prog.flush_offset;

  start = clock_start();
  delilah_mem_sync_get(0, prog_slot, prog_len, 0);
  delilah_mem_sync_get(1, data_slot, invalidation_size, invalidation_offset);
  invalidation = clock_end(start);

  elf = delilah->bar0->ehpssze >= SELFMAG &&
        !memcmp(delilah->program[prog_slot], ELFMAG, SELFMAG);

  start = clock_start();
  if (elf)
    rv = ubpf_load_elf(delilah->engine[thread->engine],
                       delilah->program[prog_slot], prog_len, &errmsg);
  else
    rv = ubpf_load(delilah->engine[thread->engine], delilah->program[prog_slot],
                   prog_len, &errmsg);
  loading = clock_end(start);

  if (rv < 0) {
    log_warn(
      "Load error: (isElf %i, engine id %i, rv %i, ps %i, ds %i, pl %i).", elf,
      thread->engine, rv, prog_slot, data_slot, prog_len);
    log_warn(" -> %s", errmsg);
    res->status = HERMES_STATUS_EBPF_ERROR;
    res->cmd_specific[0] = rv;
    goto ERROR;
  }

  start = clock_start();
  ubpf_exec(delilah->engine[thread->engine], delilah->data[data_slot],
            delilah->bar0->ehdssze, &ret, delilah->shared, DELILAH_SHARED_SIZE);
  execution = clock_end(start);

  if (ret == UINT64_MAX)
    res->status = HERMES_STATUS_EBPF_ERROR;
  else
    res->status = HERMES_STATUS_SUCCESS;

  res->run_prog.ebpf_ret = ret;

  start = clock_start();
  delilah_mem_sync_set(1, data_slot, flush_size, flush_offset);
  flushing = clock_end(start);

  log_debug("Executed program (engine id %i, ds %i, ret %i)", thread->engine,
           data_slot, ret);

  log_debug(" => (%i) Invalidation: %lf s", thread->engine, invalidation);
  log_debug(" => (%i) Loading: %lf s", thread->engine, loading);
  log_debug(" => (%i) Execution %lf s", thread->engine, execution);
  log_debug(" => (%i) Flushing %lf s", thread->engine, flushing);

ERROR:
  ubpf_unload_code(delilah->engine[thread->engine]);
}
