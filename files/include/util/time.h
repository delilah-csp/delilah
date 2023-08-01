#ifndef DELILAH_UTIL_TIME
#define DELILAH_UTIL_TIME

#include <sys/time.h>

inline struct timeval
clock_start()
{
  struct timeval start;
  gettimeofday(&start, NULL);
  return start;
}

inline double
clock_end(struct timeval start)
{
  struct timeval end;
  gettimeofday(&end, NULL);
  return (end.tv_sec - start.tv_sec) +
         (end.tv_usec - start.tv_usec) / 1000000.0;
}

#endif