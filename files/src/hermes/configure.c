#include <stdio.h>

#include "conf/conf.h"
#include "conf/hermes.h"
#include "conf/version.h"
#include "delilah.h"
#include "hermes/config.h"
#include "hermes/configure.h"
#include "mem/mem.h"
#include "util/log.h"

return_t
delilah_hermes_configure(struct delilah_t* delilah)
{
  struct delilah_bar0* bar0 = delilah->bar0;

  bar0->ehver = 0;                        // Protocol version
  bar0->eheng = HERMES_UBPF_ENGINES;      // Number of engines
  bar0->ehpslot = HERMES_PROG_SLOT_COUNT; // Number of program slots
  bar0->ehdslot = HERMES_DATA_SLOT_COUNT; // Number of data slots
  bar0->ehpsoff = HERMES_DATA_LOC;        // Program slot offset
  bar0->ehpssze = HERMES_PROG_SLOT_SIZE;  // Program slot size
  bar0->ehdsoff = HERMES_DATA_LOC + (HERMES_PROG_SLOT_COUNT *
                                     HERMES_PROG_SLOT_SIZE); // Data slot offset
  bar0->ehdssze = HERMES_DATA_SLOT_SIZE;                     // Data slot size
  bar0->ehsssze = DELILAH_SHARED_SIZE; // Shared data slot size

  snprintf(bar0->ehbld, 48, "Delilah v%i.%i.%i", DELILAH_VERSION_MAJOR,
           DELILAH_VERSION_MINOR, DELILAH_VERSION_BUILD); // Delilah version

  return 0x0;
}
