#ifndef DELILAH_LOADER_LOADER
#define DELILAH_LOADER_LOADER

#include "delilah.h"
#include <pthread.h>
#include <sched.h>
#include <stdint.h>

struct delilah_thread_t
{
  int engine;
  pthread_t thread_id;

  struct delilah_t* delilah;
  struct hermes_cmd* cmd;
  struct delilah_cmd_ctrl* ctrl;
};

return_t delilah_loader_configure(struct delilah_t* delilah);
return_t delilah_loader_unload(struct delilah_t* delilah);
return_t delilah_loader_start(struct delilah_t* delilah);

#endif
