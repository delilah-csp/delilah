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
delilah_command_clear_cache(struct delilah_thread_t* thread,
                            struct hermes_cmd_req* req,
                            struct hermes_cmd_res* res,
                            struct delilah_t* delilah)
{
  int fd = open("/proc/sys/vm/drop_caches", O_WRONLY);
  if (fd == -1) {
    log_error("Error opening /proc/sys/vm/drop_caches");
    return -1;
  }

  // Writing "3" to drop_caches to clear both page cache and inode cache
  const char* data = "3";
  if (write(fd, data, sizeof(char)) == -1) {
    log_error("Error writing to /proc/sys/vm/drop_caches");
    close(fd);
    return -1;
  }

  close(fd);

  res->status = HERMES_STATUS_SUCCESS;

  return 0;
}