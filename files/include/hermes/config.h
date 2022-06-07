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
  uint32_t ehver;           /* 0x00 */
  char ehbld[48];           /* 0x04 */
  uint8_t eheng;            /* 0x34 */
  uint8_t ehpslot;          /* 0x35 */
  uint8_t ehdslot;          /* 0x36 */
  uint8_t rsv0;             /*      */
  uint32_t ehpsoff;         /* 0x38 */
  uint32_t ehpssze;         /* 0x3C */
  uint32_t ehdsoff;         /* 0x40 */
  uint32_t ehdssze;         /* 0x44 */
  char rsv1[0x1000 - 0x48]; /* 0x48 */

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
