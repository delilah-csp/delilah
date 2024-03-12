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
 * \file /Users/nhed/Development/TSL/tsl/include/generated/definitions/binary/binary_neon.hpp
 * \date 2023-05-23
 * \brief Bit manipulation primitives.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_NEON_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_NEON_HPP


#include "../../declarations/binary.hpp"
#include <tuple>
namespace tsl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::86
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vandq_u8( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::86
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vandq_u16( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::86
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vandq_u32( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::86
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vandq_u64( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::86
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vandq_s8( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::86
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vandq_s16( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::86
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vandq_s32( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::86
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vandq_s64( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::90
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vreinterpretq_f32_u32(vandq_u32( vreinterpretq_u32_f32(a),vreinterpretq_u32_f32(b)));
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::90
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vreinterpretq_f64_u64(vandq_u64( vreinterpretq_u64_f64(a),vreinterpretq_u64_f64(b)));
            }
         };
   } // end of namespace functors for template specialization of binary_and for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::222
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vorq_u8( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_or for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::222
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vorq_u16( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_or for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::222
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vorq_u32( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_or for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::222
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vorq_u64( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_or for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::222
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vorq_s8( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_or for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::222
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vorq_s16( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_or for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::222
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vorq_s32( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_or for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::222
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vorq_s64( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_or for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::226
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vreinterpretq_f32_u32(vorq_u32( vreinterpretq_u32_f32(a),vreinterpretq_u32_f32(b)));
            }
         };
   } // end of namespace functors for template specialization of binary_or for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::226
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vreinterpretq_f64_u64(vorq_u64( vreinterpretq_u64_f64(a),vreinterpretq_u64_f64(b)));
            }
         };
   } // end of namespace functors for template specialization of binary_or for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::345
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return veorq_u8( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_xor for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::345
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return veorq_u16( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_xor for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::345
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return veorq_u32( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_xor for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::345
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return veorq_u64( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_xor for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::345
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return veorq_s8( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_xor for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::345
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return veorq_s16( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_xor for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::345
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return veorq_s32( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_xor for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::345
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return veorq_s64( a, b );
            }
         };
   } // end of namespace functors for template specialization of binary_xor for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::349
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vreinterpretq_f32_u32(
                 veorq_u32(
                   vreinterpretq_u32_f32(a),
                   vreinterpretq_u32_f32(b)));
            }
         };
   } // end of namespace functors for template specialization of binary_xor for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::349
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
return vreinterpretq_f64_u64(
                 veorq_u64(
                   vreinterpretq_u64_f64(a),
                   vreinterpretq_u64_f64(b)));
            }
         };
   } // end of namespace functors for template specialization of binary_xor for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::531
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshlq_n_u8(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::531
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshlq_n_u16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::531
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshlq_n_u32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::531
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshlq_n_u64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::531
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshlq_n_s8(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::531
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshlq_n_s16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::531
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshlq_n_s32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::531
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshlq_n_s64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::535
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
vreinterpretq_f32_u32(
                 vshlq_n_32(
                   vreinterpretq_u32_f32(a),
                   vreinterpretq_u32_f32(b)));
            }
         };
   } // end of namespace functors for template specialization of shift_left for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::535
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
vreinterpretq_f64_u64(
                 vshlq_n_64(
                   vreinterpretq_u64_f64(a),
                   vreinterpretq_u64_f64(b)));
            }
         };
   } // end of namespace functors for template specialization of shift_left for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::617
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_u8(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::617
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_u16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::617
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_u32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::617
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_u64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::617
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_s8(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::617
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_s16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::617
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_s32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::617
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_s64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::696
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_u8(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::696
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_u16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::696
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_u32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::696
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_u64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::696
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_u8(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::696
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_u16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::696
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_u32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::696
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const unsigned int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const unsigned int shift
            ) {
return vshrq_n_u64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::782
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_u8(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::782
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_u16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::782
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_u32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::782
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_u64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::782
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_s8(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::782
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_s16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::782
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_s32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::782
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_s64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::860
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshrq_u8(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::860
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshrq_u16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::860
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshrq_u32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::860
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshrq_u64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::860
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshrq_s8(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::860
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshrq_s16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::860
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshrq_s32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::860
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshrq_s64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::948
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_u8(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::948
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_u16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::948
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_u32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::948
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_u64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::948
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_u8(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::948
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_u16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::948
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_u32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/binary.yaml::948
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
return vshlq_u64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for neon using int64_t.
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_NEON_HPP