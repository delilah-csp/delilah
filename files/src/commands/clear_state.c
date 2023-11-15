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
  memset(delilah->shared, 0, DELILAH_SHARED_SIZE);
  return 0;
}
