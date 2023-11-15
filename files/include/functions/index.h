#ifndef DELILAH_FUNCTIONS_INDEX
#define DELILAH_FUNCTIONS_INDEX

#include "functions/debug.h"
#include "functions/file.h"
#include "functions/hw/filter.h"
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
  {.idx = 11,
   .name = "delilah_file_read_offset",
   &delilah_functions_file_read_offset },
  {.idx = 12,
   .name = "delilah_file_direct_read",
   &delilah_functions_file_direct_read },
  {.idx = 13,
   .name = "delilah_file_direct_read_offset",
   &delilah_functions_file_direct_read_offset },
  {.idx = 14,
   .name = "delilah_file_indirect_read",
   &delilah_functions_file_indirect_read },
  {.idx = 15,
   .name = "delilah_file_indirect_read_offset",
   &delilah_functions_file_indirect_read_offset },

  /* Debug Module */
  {.idx = 20, .name = "delilah_debug_bench", &delilah_functions_debug_bench },

  /* Memory Module */
  {.idx = 30, .name = "delilah_memcpy", &memcpy },

  /* HW Filter Module */
  {.idx = 40, .name = "delilah_hw_filter_eq", &delilah_functions_hw_filter_eq },
  {.idx = 41,
   .name = "delilah_hw_filter_neq",
   &delilah_functions_hw_filter_neq },
  {.idx = 42, .name = "delilah_hw_filter_lt", &delilah_functions_hw_filter_lt },
  {.idx = 43, .name = "delilah_hw_filter_le", &delilah_functions_hw_filter_le },
  {.idx = 44, .name = "delilah_hw_filter_gt", &delilah_functions_hw_filter_gt },
  {.idx = 45, .name = "delilah_hw_filter_ge", &delilah_functions_hw_filter_ge },
  {.idx = 46, .name = "delilah_hw_filter_bw", &delilah_functions_hw_filter_bw },
  {.idx = 47,
   .name = "delilah_hw_filter_bwi",
   &delilah_functions_hw_filter_bwi },
  {.idx = 48,
   .name = "delilah_hw_filter_bwli",
   &delilah_functions_hw_filter_bwli },
  {.idx = 49,
   .name = "delilah_hw_filter_bwhi",
   &delilah_functions_hw_filter_bwhi }
};

#endif
