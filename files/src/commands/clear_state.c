#include "commands/commands.h"
#include "hermes/config.h"
#include "hermes/status.h"
#include "mem/mem.h"
#include "util/log.h"
#include "util/time.h"
#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>

uint64_t
delilah_command_clear_state(struct delilah_thread_t* thread,
                            struct hermes_cmd_req* req,
                            struct hermes_cmd_res* res,
                            struct delilah_t* delilah)
{
  uint64_t size =
    req->clear_state.size == 0 ? DELILAH_SHARED_SIZE : req->clear_state.size;
  log_debug("Clearing state %lld bytes, %lld offset", size,
            req->clear_state.offset);
  memset(delilah->shared + req->clear_state.offset, 0, size);
  return 0x0;
}
