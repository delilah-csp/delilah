#include "commands/commands.h"
#include "hermes/config.h"
#include "hermes/status.h"
#include "mem/mem.h"
#include "util/log.h"
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

  struct timeval time_start, time_end;
  struct timeval time_sync_in, time_sync_out, time_exec, time_load;

  uint8_t prog_slot = req->run_prog.prog_slot;
  uint8_t data_slot = req->run_prog.data_slot;
  uint32_t prog_len = req->run_prog.prog_len;

  gettimeofday(&time_start, NULL);
  delilah_mem_sync_get(0, prog_slot);
  delilah_mem_sync_get(1, data_slot);
  gettimeofday(&time_end, NULL);
  timersub(&time_end, &time_start, &time_sync_in);

  elf = delilah->bar0->ehpssze >= SELFMAG &&
        !memcmp(delilah->program[prog_slot], ELFMAG, SELFMAG);

  gettimeofday(&time_start, NULL);
  if (elf)
    rv = ubpf_load_elf(delilah->engine[thread->engine],
                       delilah->program[prog_slot], prog_len, &errmsg);
  else
    rv = ubpf_load(delilah->engine[thread->engine], delilah->program[prog_slot],
                   prog_len, &errmsg);
  gettimeofday(&time_end, NULL);
  timersub(&time_end, &time_start, &time_load);

  if (rv < 0) {
    log_warn(
      "Load error: (isElf %i, engine id %i, rv %i, ps %i, ds %i, pl %i).", elf,
      thread->engine, rv, prog_slot, data_slot, prog_len);
    log_warn(" -> %s", errmsg);
    res->status = HERMES_STATUS_EBPF_ERROR;
    res->cmd_specific[0] = rv;
    goto ERROR;
  }

  gettimeofday(&time_start, NULL);
  ubpf_exec(delilah->engine[thread->engine], delilah->data[data_slot],
            delilah->bar0->ehdssze, &ret);
  gettimeofday(&time_end, NULL);
  timersub(&time_end, &time_start, &time_exec);

  if (ret == UINT64_MAX)
    res->status = HERMES_STATUS_EBPF_ERROR;
  else
    res->status = HERMES_STATUS_SUCCESS;

  res->run_prog.ebpf_ret = ret;

  gettimeofday(&time_start, NULL);
  delilah_mem_sync_set(1, data_slot);
  gettimeofday(&time_end, NULL);
  timersub(&time_end, &time_start, &time_sync_out);

  log_info("Executed program (engine id %i, ds %i, ret %i)", thread->engine,
           data_slot, ret);

  log_debug(" => sync in %ld.%06lds, load %ld.%06lds, exec %ld.%06lds, sync "
            "out %ld.%06lds.",
            (long int)time_sync_in.tv_sec, (long int)time_sync_in.tv_usec,
            (long int)time_load.tv_sec, (long int)time_load.tv_usec,
            (long int)time_exec.tv_sec, (long int)time_exec.tv_usec,
            (long int)time_sync_out.tv_sec, (long int)time_sync_out.tv_usec);

ERROR:
  ubpf_unload_code(delilah->engine[thread->engine]);
}
