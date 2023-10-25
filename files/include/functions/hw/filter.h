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

#endif
