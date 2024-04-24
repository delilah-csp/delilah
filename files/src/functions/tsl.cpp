#include <cstdio>
#include <cstdlib>
// #include <tslintrin.hpp>
#include <arm_neon.h>
#include <climits>
#include <iostream>

extern "C" {
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

typedef uint8_t bitmask_t;

/**
 * @brief Filter between two values
 * @param out_ptr Pointer to the output array
 * @param data_ptr Pointer to the input array
 * @param element_count Number of elements in the input array
 * @param lower_bound Lower bound of the filter
 * @param upper_bound Upper bound of the filter
 * @return Number of bitmask_t elements in the output array
 */
uint32_t
delilah_functions_tsl_filter_between_neon(uint32_t* __restrict__ out_ptr,
                                          uint32_t const* __restrict__ data_ptr,
                                          uint32_t const element_count,
                                          uint32_t const lower_bound,
                                          uint32_t const upper_bound)
{
  uint32x4_t const lower = vdupq_n_u32(lower_bound);
  uint32x4_t const upper = vdupq_n_u32(upper_bound);
  uint32x4_t active_bit;
  uint32x4_t result_batch;

  uint32_t const remainder_element_count = element_count & 127;
  uint32_t const simdified_element_count =
    element_count - remainder_element_count;
  uint32_t const* const data_simdified_end_ptr =
    data_ptr + simdified_element_count;
  uint32_t const* const data_end_ptr = data_ptr + element_count;
  bitmask_t* const out_ptr_orig = (bitmask_t*)out_ptr;

  while (data_ptr != data_simdified_end_ptr) {
    result_batch = vdupq_n_u32(0);
    active_bit = vdupq_n_u32(0x1);
    uint32_t const* const data_batch_end_ptr =
      data_ptr +
      128; // 128 elements, since we read 32 elements for every lane (4)
    for (; data_ptr != data_batch_end_ptr; data_ptr += 4) {
      uint32x4_t const data = vld1q_u32(data_ptr); // load data
      uint32x4_t const result_tmp = vandq_u32(
        vcgeq_u32(data, lower),
        vcleq_u32(data,
                  upper)); // actual comparison (per lane, all bits are either
                           // set to 1 (if in range), or 0 otherwise)
      result_batch = vorrq_u32(result_batch, vandq_u32(active_bit, result_tmp));
      active_bit =
        vshlq_n_u32(active_bit, 1); // shift active_bit by one to the left
    }
    vst1q_u32(out_ptr, result_batch);
    out_ptr += 4;
  }
  if (remainder_element_count != 0) {
    uint32_t const* const data_remainder_batch_end_ptr =
      data_ptr +
      (remainder_element_count -
       (remainder_element_count & ((sizeof(bitmask_t) * CHAR_BIT) - 1)));
    bitmask_t bitmap;
    bitmask_t i;
    bitmask_t* bitmask_result_ptr = (bitmask_t*)out_ptr;
    while (data_ptr != data_remainder_batch_end_ptr) {
      bitmap ^= bitmap;
      i ^= i;
#pragma unroll(sizeof(bitmask_t) * CHAR_BIT)
      for (; i < (sizeof(bitmask_t) * CHAR_BIT); ++i) {
        uint32_t const data = *data_ptr++;
        bitmask_t const inc = ((data >= lower_bound) & (data <= upper_bound));
        bitmap |= inc << i++;
      }
      *bitmask_result_ptr++ = bitmap;
    }
    if (data_ptr != data_end_ptr) {
      bitmap ^= bitmap;
      i ^= i;
      for (; data_ptr != data_end_ptr; ++data_ptr) {
        uint32_t const data = *data_ptr;
        const bitmask_t inc = ((data >= lower_bound) & (data <= upper_bound));
        bitmap |= inc << i++;
      }
      *bitmask_result_ptr++ = bitmap;
    }
    return (bitmask_t*)bitmask_result_ptr - out_ptr_orig;
  }
  return (bitmask_t*)out_ptr - out_ptr_orig;
}

/**
 * @brief Filter equal to a value
 * @param out_ptr Pointer to the output array
 * @param data_ptr Pointer to the input array
 * @param element_count Number of elements in the input array
 * @param compare_value Value to compare against
 * @return Number of bitmask_t elements in the output array
 */
uint32_t
delilah_functions_tsl_filter_equal_neon(uint32_t* __restrict__ out_ptr,
                                        uint32_t const* __restrict__ data_ptr,
                                        uint32_t const element_count,
                                        uint32_t const compare_value)
{
  uint32x4_t const cmp = vdupq_n_u32(compare_value);
  uint32x4_t active_bit;
  uint32x4_t result_batch;

  uint32_t const remainder_element_count = element_count & 127;
  uint32_t const simdified_element_count =
    element_count - remainder_element_count;
  uint32_t const* const data_simdified_end_ptr =
    data_ptr + simdified_element_count;
  uint32_t const* const data_end_ptr = data_ptr + element_count;
  char* const out_ptr_orig = (char*)out_ptr;

  while (data_ptr != data_simdified_end_ptr) {
    result_batch = vdupq_n_u32(0);
    active_bit = vdupq_n_u32(0x1);
    uint32_t const* const data_batch_end_ptr =
      data_ptr +
      128; // 128 elements, since we read 32 elements for every lane (4)
    for (; data_ptr != data_batch_end_ptr; data_ptr += 4) {
      uint32x4_t const data = vld1q_u32(data_ptr); // load data
      uint32x4_t const result_tmp =
        vceqq_u32(data, cmp); // actual comparison (per lane, all bits are
                              // either set to 1 (if in range), or 0 otherwise)
      result_batch = vorrq_u32(result_batch, vandq_u32(active_bit, result_tmp));
      active_bit =
        vshlq_n_u32(active_bit, 1); // shift active_bit by one to the left
    }
    vst1q_u32(out_ptr, result_batch);
    out_ptr += 4;
  }
  if (remainder_element_count != 0) {
    uint32_t const* const data_remainder_batch_end_ptr =
      data_ptr +
      (remainder_element_count -
       (remainder_element_count & ((sizeof(bitmask_t) * CHAR_BIT) - 1)));
    bitmask_t bitmap;
    bitmask_t i;
    bitmask_t* bitmask_result_ptr = (bitmask_t*)out_ptr;
    while (data_ptr != data_remainder_batch_end_ptr) {
      bitmap ^= bitmap;
      i ^= i;
#pragma unroll(sizeof(bitmask_t) * CHAR_BIT)
      for (; i < (sizeof(bitmask_t) * CHAR_BIT); ++i) {
        uint32_t const data = *data_ptr++;
        bitmask_t const inc = (data == compare_value);
        bitmap |= inc << i++;
      }
      *bitmask_result_ptr++ = bitmap;
    }
    if (data_ptr != data_end_ptr) {
      bitmap ^= bitmap;
      i ^= i;
      for (; data_ptr != data_end_ptr; ++data_ptr) {
        uint32_t const data = *data_ptr;
        bitmask_t const inc = (data == compare_value);
        bitmap |= inc << i++;
      }
      *bitmask_result_ptr++ = bitmap;
    }
    return (char*)bitmask_result_ptr - out_ptr_orig;
  }
  return (char*)out_ptr - out_ptr_orig;
}
