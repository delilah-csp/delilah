#ifndef DELILAH_CONF_HERMES
#define DELILAH_CONF_HERMES

#include "util/units.h"

/* DYNAMIC SETTINGS */
#define HERMES_UBPF_ENGINES 4

#define HERMES_DATA_LOC 0x1000000000
#define HERMES_BAR0_SIZE (32 * MiB)

#define HERMES_PROG_SLOT_COUNT 16
#define HERMES_PROG_SLOT_SIZE (4 * MiB)

#define HERMES_DATA_SLOT_COUNT 12
#define HERMES_DATA_SLOT_SIZE (1 * GiB)

#define DELILAH_SHARED_SIZE (1 * GiB)

#define HERMES_IRQ_COUNT 4
#define HERMES_IRQ_REQ_BASE 504
#define HERMES_IRQ_ACK_BASE 500

#endif
