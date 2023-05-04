#ifndef DELILAH_FUNCTIONS_INDEX
#define DELILAH_FUNCTIONS_INDEX

#include "functions/cpu.h"
#include "functions/debug.h"
#include "functions/file.h"
#include "functions/fs.h"
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

  /* FS Module */
  { .idx = 20, .name = "delilah_fs_mount", &delilah_functions_fs_mount },
  { .idx = 21, .name = "delilah_fs_unmount", &delilah_functions_fs_unmount },

  /* CPU Module */
  { .idx = 30, .name = "delilah_cpu_prefetch_rl1", &delilah_functions_cpu_prefetch_rl1 },
  { .idx = 31, .name = "delilah_cpu_prefetch_rl2", &delilah_functions_cpu_prefetch_rl2 },
  { .idx = 32, .name = "delilah_cpu_prefetch_wl1", &delilah_functions_cpu_prefetch_wl1 },
  { .idx = 33, .name = "delilah_cpu_prefetch_wl2", &delilah_functions_cpu_prefetch_wl2 },

  /* Debug Module */
  { .idx = 40, .name = "delilah_debug_bench", &delilah_functions_debug_bench }
};

#endif
