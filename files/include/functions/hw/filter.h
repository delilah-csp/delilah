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
delilah_functions_hw_filter_eq(uint8_t eng, void* in, void* out, uint32_t num,
                               uint32_t comp)
{
  return delilah_hw_filter(eng, (uint64_t)in, (uint64_t)out, num,
                           DELILAH_FILTER_EQ, comp, 0);
}

static size_t
delilah_functions_hw_filter_neq(uint8_t eng, void* in, void* out, uint32_t num,
                                uint32_t comp)
{
  return delilah_hw_filter(eng, (uint64_t)in, (uint64_t)out, num,
                           DELILAH_FILTER_NEQ, comp, 0);
}

static size_t
delilah_functions_hw_filter_le(uint8_t eng, void* in, void* out, uint32_t num,
                               uint32_t comp)
{
  return delilah_hw_filter(eng, (uint64_t)in, (uint64_t)out, num,
                           DELILAH_FILTER_LE, comp, 0);
}

static size_t
delilah_functions_hw_filter_ge(uint8_t eng, void* in, void* out, uint32_t num,
                               uint32_t comp)
{
  return delilah_hw_filter(eng, (uint64_t)in, (uint64_t)out, num,
                           DELILAH_FILTER_GE, comp, 0);
}

static size_t
delilah_functions_hw_filter_bwi(uint8_t eng, void* in, void* out, uint32_t num,
                                uint64_t comp)
{
  uint32_t comp1, comp2;
  comp1 = (uint32_t)((comp & 0xFFFFFFFF00000000LL) >> 32);
  comp2 = (uint32_t)(comp & 0xFFFFFFFFLL);

  return delilah_hw_filter(eng, (uint64_t)in, (uint64_t)out, num,
                           DELILAH_FILTER_BWI, comp1, comp2);
}

#endif
