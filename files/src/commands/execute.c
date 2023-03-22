#include "commands/commands.h"
#include "hermes/config.h"
#include "hermes/status.h"
#include "mem/mem.h"
#include "util/log.h"
#include "util/ncurses.h"
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

  ncurses_report_engine_cache_slots(thread->engine, prog_slot, data_slot);
  delilah_mem_sync_get(0, prog_slot, prog_len, 0);
  delilah_mem_sync_get(1, data_slot, invalidation_size, invalidation_offset);

  elf = delilah->bar0->ehpssze >= SELFMAG &&
        !memcmp(delilah->program[prog_slot], ELFMAG, SELFMAG);

  if (elf)
    rv = ubpf_load_elf(delilah->engine[thread->engine],
                       delilah->program[prog_slot], prog_len, &errmsg);
  else
    rv = ubpf_load(delilah->engine[thread->engine], delilah->program[prog_slot],
                   prog_len, &errmsg);

  if (rv < 0) {
    char error[256];
    snprintf(error, 256, "Load error: (isElf %i, engine id %i, rv %i, ps %i, "
                         "ds %i, pl %i). -> %s",
             elf, thread->engine, rv, prog_slot, data_slot, prog_len, errmsg);
    ncurses_log_warn(error);

    res->status = HERMES_STATUS_EBPF_ERROR;
    res->cmd_specific[0] = rv;
    goto ERROR;
  }

  ncurses_report_engine_start(thread->engine);
  ubpf_exec(delilah->engine[thread->engine], delilah->data[data_slot],
            delilah->bar0->ehdssze, &ret);

  if (ret == UINT64_MAX)
    res->status = HERMES_STATUS_EBPF_ERROR;
  else
    res->status = HERMES_STATUS_SUCCESS;

  res->run_prog.ebpf_ret = ret;

  ncurses_report_engine_cache(thread->engine);
  delilah_mem_sync_set(1, data_slot, flush_size, flush_offset);

  ncurses_report_engine_stopped(thread->engine, ret);

  char info[256];
  snprintf(info, 256, "Engine %i finished with return value %lu, slots %i, %i",
           thread->engine, ret, prog_slot, data_slot);

  ncurses_log_info(info);

ERROR:
  ubpf_unload_code(delilah->engine[thread->engine]);
}
