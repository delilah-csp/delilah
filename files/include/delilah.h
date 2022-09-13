#ifndef DELILAH_DELILAH
#define DELILAH_DELILAH

typedef int return_t;

#include "conf/hermes.h"
#include "loader/loader.h"
#include "ubpf/ubpf.h"

struct delilah_slots_t
{
  uint8_t *program[HERMES_PROG_SLOT_COUNT][HERMES_PROG_SLOT_SIZE];
  uint8_t *data[HERMES_DATA_SLOT_COUNT][HERMES_DATA_SLOT_SIZE];
};

struct delilah_t
{
  int exiting;
  return_t rv;

  struct hermes_bar0* bar0;
  void* program[HERMES_PROG_SLOT_COUNT];
  void* data[HERMES_DATA_SLOT_COUNT];

  struct ubpf_vm* engine[HERMES_UBPF_ENGINES];
  struct delilah_thread_t threads[HERMES_UBPF_ENGINES];
};

return_t delilah_start(struct delilah_t* delilah);

#endif
