#ifndef DELILAH_HERMES_CONFIG
#define DELILAH_HERMES_CONFIG

#include "conf/hermes.h"
#include "hermes/command.h"

union hermes_cmd_ctrl
{
  struct
  {
    volatile uint8_t ehcmdexec;
    volatile uint8_t ehcmddone;
  };
  volatile uint8_t ehcmdctrl;
};

struct hermes_bar0
{
  uint32_t ehver;
  char ehbld[48];
  uint8_t eheng;
  uint8_t ehpslot;
  uint8_t ehdslot;
  uint8_t rsv0;
  uint64_t ehpsoff;
  uint64_t ehpssze;
  uint64_t ehdsoff;
  uint64_t ehdssze;
  char rsv1[0x1000 - 0x58];

  struct hermes_cmd commands[HERMES_UBPF_ENGINES]; /* 0x1000 */
  char rsv2[0x1000 - (48 * HERMES_UBPF_ENGINES)];  /*        */

  union hermes_cmd_ctrl cmdctrl[HERMES_UBPF_ENGINES]; /* 0x2000 */
};

struct hermes_slots
{
  uint8_t program[HERMES_PROG_SLOT_COUNT][HERMES_PROG_SLOT_SIZE];
  uint8_t data[HERMES_DATA_SLOT_COUNT][HERMES_DATA_SLOT_SIZE];
};

#endif
