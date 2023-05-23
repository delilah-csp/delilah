#ifndef DELILAH_FUNCTIONS_TSL
#define DELILAH_FUNCTIONS_TSL

#include <stdint.h>

void delilah_functions_tsl_test();
uint32_t delilah_functions_tsl_filter_neon(uint32_t* data, uint32_t len, uint32_t pred0, uint32_t pred1);

#endif