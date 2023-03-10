#ifndef DELILAH_LOADER_LOADER
#define DELILAH_LOADER_LOADER

#include "delilah.h"
#include <pthread.h>

struct delilah_thread_t
{
  int engine;
  pthread_t thread_id;

  struct delilah_t* delilah;
  struct hermes_cmd* cmd;
  union hermes_cmd_ctrl* ctrl;
};

return_t delilah_loader_configure(struct delilah_t* delilah);
return_t delilah_loader_unload(struct delilah_t* delilah);
return_t delilah_loader_start(struct delilah_t* delilah);

#endif
