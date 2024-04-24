#ifndef DELILAH_HW_FILTER
#define DELILAH_HW_FILTER

#include "delilah.h"
#include "hw/xfilter/xfilter.h"
#include "hw/xfilter/xfilter_hw.h"

/*
How to import HLS driver to Delilah:
- Step 1: Fix imports (use relative path to root)
- Step 2: Add u64 type in header file
- Step 3: Set Control_BaseAddress to be 64 bit
*/

enum DELILAH_FILTER_OPS
{
  DELILAH_FILTER_EQ,
  DELILAH_FILTER_NEQ,
  DELILAH_FILTER_LE,
  DELILAH_FILTER_GE,
  DELILAH_FILTER_BWI, /*BETWEEN inclusive:        [comp0,comp1]*/
};

#define DELILAH_NUM_FILTER_ENG 4

static XFilter filter_engines[DELILAH_NUM_FILTER_ENG];

return_t delilah_hw_filter_init(struct delilah_t* delilah);
return_t delilah_hw_filter_deinit(struct delilah_t* delilah);
return_t delilah_hw_filter(uint8_t eng, uint64_t in, uint64_t out, uint32_t num,
                           uint8_t op, uint32_t comp1, uint32_t comp2);

#endif
