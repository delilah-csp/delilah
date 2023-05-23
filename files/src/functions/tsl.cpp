#include <cstdio>
#include <cstdlib>
// #include <tslintrin.hpp>
#include <iostream>
#include <arm_neon.h>

extern "C" {
  #include "functions/tsl.h"
}

void
delilah_functions_tsl_test()
{
    // using namespace tsl;
    // std::cout << type_name<simd<neon, uint64_t>>() << std::endl;
}

uint32_t delilah_functions_tsl_filter_neon(uint32_t* data, uint32_t len, uint32_t _pred0, uint32_t _pred1) {
	uint32x4_t ob1 = vdupq_n_u32( 0b1 );
    uint32x4_t pred1 = vdupq_n_u32( _pred0 );
	uint32x4_t pred2 = vdupq_n_u32( _pred1 );
	uint32x4_t vals;
	
	uint32_t result = 0;
	for ( size_t i = 0; i < len; i += 4 ) {
		vals = vld1q_u32( data+i );
		const uint32x4_t intersected = 
			vandq_u32(
                vandq_u32(
                    vcgeq_u32( vals, pred1 ),
                    vcleq_u32( vals, pred2 )
                ),
                ob1
            );
		result += vaddvq_u32( intersected );
	}

	return result;
}