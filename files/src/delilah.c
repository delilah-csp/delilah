#include <stdlib.h>
#include <string.h>

#include "conf/conf.h"
#include "conf/hermes.h"
#include "conf/version.h"
#include "delilah.h"
#include "hermes/configure.h"
#include "hw/filter.h"
#include "irq/irq.h"
#include "loader/loader.h"
#include "mem/mem.h"
#include "util/errors.h"
#include "util/log.h"

short IGNORE_DEBUG = 1;

return_t
delilah_alloc(struct delilah_t* delilah)
{
  return_t rv;

  rv = delilah_mem_alloc_bar(delilah);

  if (rv > 0) {
    log_fatal("Unable to allocate memory.");
    log_fatal(" => BAR0: log %p", rv);
    return rv;
  }

  rv = delilah_mem_alloc_data(delilah);

  if (rv > 0) {
    log_fatal("Unable to allocate memory.");
    log_fatal(" => DATA: log %p", rv);
    return rv;
  }

  rv = delilah_mem_alloc_shared(delilah);

  if (rv > 0) {
    log_fatal("Unable to allocate shared memory.");
    log_fatal(" => SHR: log %p", rv);
    return rv;
  }

  return 0x0;
}

int
main(int argc, char const* argv[])
{
  log_info("Starting Delilah v%i.%i.%i.", DELILAH_VERSION_MAJOR,
           DELILAH_VERSION_MINOR, DELILAH_VERSION_BUILD);

  struct delilah_t* delilah = malloc(sizeof(struct delilah_t));
  delilah->static_shared = 0;

  for (int i = 1; i < argc; ++i) {
    if (strcmp(argv[i], "--debug") == 0) {
      IGNORE_DEBUG = 0;
      log_debug("Debug mode enabled.");
    }

    if (strcmp(argv[i], "--static-shared") == 0) {
      delilah->static_shared = 1;
      log_debug("Using static shared slot in PL memory.");
    }
  }

  if ((delilah->rv = delilah_alloc(delilah)) > 0) {
    log_error("Allocation error!");
    goto FATAL_EXIT;
  }

  if ((delilah->rv = delilah_hermes_configure(delilah)) > 0) {
    log_error("Hermes configuration error!");
    goto FATAL_EXIT;
  }

  if ((delilah->rv = delilah_irq_configure(delilah)) > 0) {
    log_error("IRQ configuration error!");
    goto FATAL_EXIT;
  }

  if ((delilah->rv = delilah_loader_configure(delilah)) > 0) {
    log_error("Delilah Loader configuration error!");
    goto FATAL_EXIT;
  }

  if ((delilah->rv = delilah_hw_filter_init(delilah)) > 0) {
    log_error("Delilah HW filter configuration error!");
    goto FATAL_EXIT;
  }

  if ((delilah->rv = delilah_loader_start(delilah)) > 0) {
    log_error("Delilah core error!");
    goto FATAL_EXIT;
  }

  log_info("Delilah startup successful. Listening ..");
  goto EXIT;

FATAL_EXIT:
  log_fatal("Fatal error. Emergency shutdown. Error %i", delilah->rv);

EXIT:
  delilah_loader_unload(delilah);
  delilah_hw_filter_deinit(delilah);
  delilah_irq_close(delilah);
  delilah_mem_unalloc_data(delilah);
  delilah_mem_unalloc_bar(delilah);
  delilah_mem_alloc_shared(delilah);

  free(delilah);

  log_info("Exiting ..");

  return delilah->rv;
}
