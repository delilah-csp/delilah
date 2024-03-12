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
 * \file /Users/nhed/Development/TSL/tsl/include/generated/definitions/compare/compare_neon.hpp
 * \date 2023-05-23
 * \brief Compare primitives.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_NEON_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_NEON_HPP


#include "../../declarations/compare.hpp"
#include <tuple>
namespace tsl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::124
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vceqq_s8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::124
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vceqq_u8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::124
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vceqq_s16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::124
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vceqq_u16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::124
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vceqq_s32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::124
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vceqq_u32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::124
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vceqq_s64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::124
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vceqq_u64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::124
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vceqq_f32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::124
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vceqq_f64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "between_inclusive" (primitive between_inclusive).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::324
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct between_inclusive<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type,typename Vec::register_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_min, typename Vec::register_type const vec_max
            ) {
return vandq_u64( vcgeq_s64( vec_data, vec_min ), vcleq_s64( vec_data, vec_max ) );
            }
         };
   } // end of namespace functors for template specialization of between_inclusive for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::454
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcltq_s8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::454
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcltq_u8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::454
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcltq_s16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::454
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcltq_u16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::454
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcltq_s32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::454
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcltq_u32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::454
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcltq_s64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::454
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcltq_u64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::454
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcltq_f32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::454
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcltq_f64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::570
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgtq_s8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::570
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgtq_u8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::570
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgtq_s16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::570
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgtq_u16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::570
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgtq_s32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::570
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgtq_u32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::570
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgtq_s64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::570
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgtq_u64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::570
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgtq_f32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::570
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgtq_f64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcleq_s8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcleq_u8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcleq_s16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcleq_u16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcleq_s32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcleq_u32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcleq_s64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcleq_u64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcleq_f32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcleq_f64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::817
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgeq_s8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::817
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgeq_u8(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::817
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgeq_s16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::817
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgeq_u16(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::817
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgeq_s32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::817
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgeq_u32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::817
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgeq_s64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::817
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgeq_u64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::817
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgeq_f32(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/compare.yaml::817
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
return vcgeq_f64(vec_a, vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for neon using double.
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_NEON_HPP