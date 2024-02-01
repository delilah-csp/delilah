#ifndef DELILAH_FUNCTIONS_HW_FILTER
#define DELILAH_FUNCTIONS_HW_FILTER

#include "hw/filter.h"
#include "util/log.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

static size_t
delilah_functions_hw_filter_eq(void* in, void* out, uint64_t num, uint64_t comp)
{
  return delilah_hw_filter((uint64_t)in, (uint64_t)out, num, DELILAH_FILTER_EQ,
                           comp, 0);
}

static size_t
delilah_functions_hw_filter_neq(void* in, void* out, uint64_t num,
                                uint64_t comp)
{
  return delilah_hw_filter((uint64_t)in, (uint64_t)out, num, DELILAH_FILTER_NEQ,
                           comp, 0);
}

static size_t
delilah_functions_hw_filter_le(void* in, void* out, uint64_t num, uint64_t comp)
{
  return delilah_hw_filter((uint64_t)in, (uint64_t)out, num, DELILAH_FILTER_LE,
                           comp, 0);
}

static size_t
delilah_functions_hw_filter_ge(void* in, void* out, uint64_t num, uint64_t comp)
{
  return delilah_hw_filter((uint64_t)in, (uint64_t)out, num, DELILAH_FILTER_GE,
                           comp, 0);
}

static size_t
delilah_functions_hw_filter_bwi(void* in, void* out, uint64_t num,
                                uint64_t comp1, uint64_t comp2)
{
  return delilah_hw_filter((uint64_t)in, (uint64_t)out, num, DELILAH_FILTER_BWI,
                           comp1, comp2);
}

#endif
