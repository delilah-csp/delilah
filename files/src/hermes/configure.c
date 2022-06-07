#include <stdio.h>

#include "conf/conf.h"
#include "conf/version.h"
#include "delilah.h"
#include "hermes/config.h"
#include "hermes/configure.h"
#include "mem/mem.h"
#include "util/log.h"

return_t
delilah_hermes_configure(struct delilah_t* delilah)
{
  struct hermes_bar0* bar0 = delilah->bar0;

  bar0->ehver = 0;
  bar0->eheng = HERMES_UBPF_ENGINES;
  bar0->ehpslot = HERMES_PROG_SLOT_COUNT;
  bar0->ehdslot = HERMES_DATA_SLOT_COUNT;
  bar0->ehpsoff = DELILAH_DATA_LOC;
  bar0->ehpssze = HERMES_PROG_SLOT_SIZE;
  bar0->ehdsoff =
    DELILAH_DATA_LOC + (HERMES_PROG_SLOT_COUNT * HERMES_PROG_SLOT_SIZE);
  bar0->ehdssze = HERMES_DATA_SLOT_SIZE;

  snprintf(bar0->ehbld, 48, "Delilah v%i.%i.%i", DELILAH_VERSION_MAJOR,
           DELILAH_VERSION_MINOR, DELILAH_VERSION_BUILD);

  return 0x0;
}
