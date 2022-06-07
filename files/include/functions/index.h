#ifndef DELILAH_FUNCTIONS_INDEX
#define DELILAH_FUNCTIONS_INDEX

#include "functions/file.h"
#include "functions/map.h"
#include "functions/sort.h"
#include "functions/version.h"

struct ext_func
{
  uint8_t idx;
  char name[64];
  void* ref;
};

static struct ext_func registered_functions[] = {
  /* Version Module */
  {.idx = 0,
   .name = "delilah_version_major",
   &delilah_functions_version_major },
  {.idx = 1,
   .name = "delilah_version_minor",
   &delilah_functions_version_minor },
  {.idx = 2,
   .name = "delilah_version_build",
   &delilah_functions_version_build },

  /* File Module */
  {.idx = 10, .name = "delilah_file_read", &delilah_functions_file_read },

  /* Sort Module */
  {.idx = 20, .name = "delilah_sort_string", &delilah_functions_sort_string },

  /* Map Module */
  {.idx = 30, .name = "delilah_map", &delilah_functions_map }
};

#endif
