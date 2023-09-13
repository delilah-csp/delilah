#ifndef DELILAH_FUNCTIONS_META
#define DELILAH_FUNCTIONS_META

#include "loader/loader.h"

static uint32_t
delilah_functions_meta_get()
{
  return thread_meta & (~0 >> 2);
}

static void delilah_functions_meta_set(uint32_t val)
{
  thread_meta = val & (~0 >> 2);
}

#endif
