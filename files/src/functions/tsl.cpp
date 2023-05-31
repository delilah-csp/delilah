#include <cstdio>
#include <cstdlib>
// #include <tslintrin.hpp>
#include <arm_neon.h>
#include <iostream>

extern "C"
{
#include "functions/tsl.h"
}

uint32_t
delilah_functions_tsl_filter_sequential(uint32_t* data, size_t len,
                                        uint32_t* out, uint32_t _c_pred1,
                                        uint32_t _c_pred2)
{
  size_t curr_idx = 0;
  for (size_t i = 0; i < len; i++) {
    const uint32_t inc = (data[i] >= _c_pred1) && (data[i] <= _c_pred2);
    out[curr_idx] = i;
    curr_idx += inc;
  }

  return curr_idx;
}

uint32_t
delilah_functions_tsl_filter_neon(uint32_t* data, size_t len, uint32_t* out,
                                  uint32_t _c_pred1, uint32_t _c_pred2)
{
  size_t curr_idx = 0;
  uint32x4_t ob1 = vdupq_n_u32(0b1);
  uint32x4_t pred1 = vdupq_n_u32(_c_pred1);
  uint32x4_t pred2 = vdupq_n_u32(_c_pred2);
  uint32x4_t vals;

  uint32_t result = 0;
  for (size_t i = 0; i < len; i += 4) {
    vals = vld1q_u32(data + i);
    const uint32x4_t intersected =
      vandq_u32(vandq_u32(vcgeq_u32(vals, pred1), vcleq_u32(vals, pred2)), ob1);

    out[curr_idx] = i + 0;
    curr_idx += vgetq_lane_u32(intersected, 0);
    out[curr_idx] = i + 1;
    curr_idx += vgetq_lane_u32(intersected, 1);
    out[curr_idx] = i + 2;
    curr_idx += vgetq_lane_u32(intersected, 2);
    out[curr_idx] = i + 3;
    curr_idx += vgetq_lane_u32(intersected, 3);
  }

  return curr_idx;
}