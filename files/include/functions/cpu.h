#ifndef DELILAH_FUNCTIONS_CPU
#define DELILAH_FUNCTIONS_CPU

#include <stdio.h>
#include <stdlib.h>

static void
delilah_functions_cpu_prefetch_rl1(const void* address)
{
  return __builtin_prefetch(address, 0, 3);
}

static void
delilah_functions_cpu_prefetch_rl2(const void* address)
{
  return __builtin_prefetch(address, 0, 2);
}

static void
delilah_functions_cpu_prefetch_wl1(const void* address)
{
  return __builtin_prefetch(address, 1, 3);
}

static void
delilah_functions_cpu_prefetch_wl2(const void* address)
{
  return __builtin_prefetch(address, 1, 2);
}

#endif