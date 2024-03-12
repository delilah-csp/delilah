/*==========================================================================*
 * This file is part of the TSL - a template SIMD library.                  *
 *                                                                          *
 * Copyright 2023 TSL-Team, Database Research Group TU Dresden              *
 *                                                                          *
 * Licensed under the Apache License, Version 2.0 (the "License");          *
 * you may not use this file except in compliance with the License.         *
 * You may obtain a copy of the License at                                  *
 *                                                                          *
 *     http://www.apache.org/licenses/LICENSE-2.0                           *
 *                                                                          *
 * Unless required by applicable law or agreed to in writing, software      *
 * distributed under the License is distributed on an "AS IS" BASIS,        *
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 * See the License for the specific language governing permissions and      *
 * limitations under the License.                                           *
 *==========================================================================*/
/*
 * \file /Users/nhed/Development/TSL/tsl/include/generated/extensions/simd/arm/neon.hpp
 * \date 2023-05-23
 * \brief Definition of the SIMD TargetExtension neon.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_EXTENSIONS_SIMD_ARM_NEON_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_EXTENSIONS_SIMD_ARM_NEON_HPP


#include <arm_neon.h>
#include <tuple>
namespace tsl {
   struct neon {
      template<TSLArithmetic BaseType, std::size_t VectorSizeInBits = 128>
         struct types {
            using default_size_in_bits = std::integral_constant<std::size_t, VectorSizeInBits>;
            using register_t  = 
               TSL_DEP_TYPE(
                  std::is_integral_v< BaseType >,
                  TSL_DEP_TYPE(
                     std::is_unsigned_v< BaseType >,
                     TSL_DEP_TYPE(
                        (sizeof( BaseType ) == 1),
                        uint8x16_t,
                        TSL_DEP_TYPE(
                           (sizeof( BaseType ) == 2),
                           uint16x8_t,
                           TSL_DEP_TYPE(
                              (sizeof( BaseType ) == 4),
                              uint32x4_t,
                              uint64x2_t
                           )
                        )
                     ),
                     TSL_DEP_TYPE(
                        (sizeof( BaseType ) == 1),
                        int8x16_t,
                        TSL_DEP_TYPE(
                           (sizeof( BaseType ) == 2),
                           int16x8_t,
                           TSL_DEP_TYPE(
                              (sizeof( BaseType ) == 4),
                              int32x4_t,
                              int64x2_t
                           )
                        )
                     )
                  ),
                  TSL_DEP_TYPE(
                     (sizeof( BaseType ) == 4),
                     float32x4_t,
                     float64x2_t
                  )
               );
            using mask_t  = 
               TSL_DEP_TYPE(
                  (sizeof( BaseType ) == 1),
                  uint8x16_t,
                  TSL_DEP_TYPE(
                     (sizeof( BaseType ) == 2),
                     uint16x8_t,
                     TSL_DEP_TYPE(
                        (sizeof( BaseType ) == 4),
                        uint32x4_t,
                        uint64x2_t
                     )
                  )
               );
            using imask_t =
               TSL_DEP_TYPE(
                  (sizeof(BaseType)==1),
                  uint16_t,
                  uint8_t
               );
         };
   };
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_EXTENSIONS_SIMD_ARM_NEON_HPP