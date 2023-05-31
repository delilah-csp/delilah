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

#endif