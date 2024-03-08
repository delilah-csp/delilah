#ifndef DELILAH_HERMES_COMMAND
#define DELILAH_HERMES_COMMAND

#include <stdint.h>

#define HERMES_CMD_STOP 0x0
#define HERMES_CMD_START 0x1
#define HERMES_CMD_NOT_FINISHED 0x0
#define HERMES_CMD_FINISHED 0x1

struct hermes_cmd_req
{
  volatile uint8_t opcode;
  uint8_t rsv0;
  volatile uint16_t cid;
  uint32_t rsv1;
  union
  {
    struct
    {
      volatile uint8_t prog_slot;
      volatile uint8_t data_slot;
      uint16_t rsv;
      volatile uint32_t prog_len;
      volatile uint32_t invalidation_size;
      volatile uint32_t invalidation_offset;
      volatile uint32_t flush_size;
      volatile uint32_t flush_offset;
    } run_prog;

    struct
    {
      volatile uint64_t size;
      volatile uint64_t offset;
    } clear_state;

    volatile uint8_t cmd_specific[24];
  };
};

struct hermes_cmd_res
{
  volatile uint16_t cid;
  volatile uint32_t status;
  uint8_t rsv0[5];
  union
  {
    volatile uint8_t cmd_specific[8];
  };
};

struct hermes_cmd
{
  struct hermes_cmd_req req;
  struct hermes_cmd_res res;
};

#endif
