#ifndef DELILAH_FUNCTIONS_TSL
#define DELILAH_FUNCTIONS_TSL

#include <stdint.h>

uint32_t delilah_functions_tsl_filter_neon(uint32_t* data, size_t len,
                                           uint32_t* out, uint32_t _c_pred1,
                                           uint32_t _c_pred2);
uint32_t delilah_functions_tsl_filter_sequential(uint32_t* data, size_t len,
                                                 uint32_t* out,
                                                 uint32_t _c_pred1,
                                                 uint32_t _c_pred2);

uint32_t delilah_functions_tsl_filter_between_neon(
  uint32_t* __restrict__ out_ptr, uint32_t const* __restrict__ data_ptr,
  uint32_t const element_count, uint32_t const lower_bound,
  uint32_t const upper_bound);
uint32_t delilah_functions_tsl_filter_equal_neon(
  uint32_t* __restrict__ out_ptr, uint32_t const* __restrict__ data_ptr,
  uint32_t const element_count, uint32_t const compare_value);

#endif