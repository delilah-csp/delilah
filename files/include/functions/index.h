#ifndef DELILAH_FUNCTIONS_INDEX
#define DELILAH_FUNCTIONS_INDEX

#include "functions/debug.h"
#include "functions/file.h"
#include "functions/version.h"

struct ext_func
{
  uint8_t idx;
  char name[64];
  void* ref;
};

static struct ext_func registered_functions[] = {
  /* Version Module */
  { .idx = 0,
    .name = "delilah_version_major",
    &delilah_functions_version_major },
  { .idx = 1,
    .name = "delilah_version_minor",
    &delilah_functions_version_minor },
  { .idx = 2,
    .name = "delilah_version_build",
    &delilah_functions_version_build },

  /* File Module */
  { .idx = 10, .name = "delilah_file_read", &delilah_functions_file_read },
  { .idx = 11,
    .name = "delilah_file_read_offset",
    &delilah_functions_file_read_offset },
  { .idx = 12,
    .name = "delilah_file_direct_read",
    &delilah_functions_file_direct_read },
  { .idx = 13,
    .name = "delilah_file_direct_read_offset",
    &delilah_functions_file_direct_read_offset },
  { .idx = 14,
    .name = "delilah_file_indirect_read",
    &delilah_functions_file_indirect_read },
  { .idx = 15,
    .name = "delilah_file_indirect_read_offset",
    &delilah_functions_file_indirect_read_offset },

  /* Debug Module */
  { .idx = 20, .name = "delilah_debug_bench", &delilah_functions_debug_bench },
};

#endif
