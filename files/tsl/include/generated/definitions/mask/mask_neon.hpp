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
 * \file /Users/nhed/Development/TSL/tsl/include/generated/definitions/mask/mask_neon.hpp
 * \date 2023-05-23
 * \brief Mask related primitives.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_NEON_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_NEON_HPP


#include "../../declarations/mask.hpp"
#include <tuple>
namespace tsl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::202
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_integral<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive to_integral is not supported by your hardware natively while it is forced by using native" );
return ( ( vec_mask[ 1 ] >> 62 ) & 0b10 ) | ( vec_mask[ 0 ] >> 63 );
            }
         };
   } // end of namespace functors for template specialization of to_integral for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::285
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_vector<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
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
                const typename Vec::mask_type mask
            ) {
return vreinterpretq_s64_u64( mask ); //mask is a vector already.
            }
         };
   } // end of namespace functors for template specialization of to_vector for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::478
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vandq_u8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::478
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vandq_u16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::478
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vandq_u32(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::478
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vandq_u64(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::478
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vandq_s8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::478
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vandq_s16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::478
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vandq_s32(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::478
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vandq_s64(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::482
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return
                  vreinterpretq_f32_u32(
                     vandq_u32(
                        vreinterpretq_u32_f32(first),
                        vreinterpretq_u32_f32(second)
                     )
                  );
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::482
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return
                  vreinterpretq_f64_u64(
                     vandq_u64(
                        vreinterpretq_u64_f64(first),
                        vreinterpretq_u64_f64(second)
                     )
                  );
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::522
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_and<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first & second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_and for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::522
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_and<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first & second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_and for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::522
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_and<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first & second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_and for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::522
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_and<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first & second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_and for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::522
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_and<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first & second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_and for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::522
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_and<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first & second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_and for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::522
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_and<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first & second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_and for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::522
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_and<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first & second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_and for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::522
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_and<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first & second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_and for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::522
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_and<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first & second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_and for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::586
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vorq_u8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::586
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vorq_u16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::586
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vorq_u32(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::586
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vorq_u64(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::586
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vorq_s8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::586
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vorq_s16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::586
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vorq_s32(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::586
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return vorq_s64(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::590
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return
                  vreinterpretq_f32_u32(
                     vorq_u32(
                        vreinterpretq_u32_f32(first),
                        vreinterpretq_u32_f32(second)
                     )
                  );
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::590
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return
                  vreinterpretq_f64_u64(
                     vorq_u64(
                        vreinterpretq_u64_f64(first),
                        vreinterpretq_u64_f64(second)
                     )
                  );
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::630
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_or<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first | second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_or for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::630
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_or<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first | second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_or for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::630
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_or<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first | second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_or for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::630
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_or<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first | second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_or for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::630
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_or<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first | second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_or for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::630
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_or<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first | second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_or for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::630
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_or<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first | second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_or for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::630
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_or<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first | second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_or for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::630
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_or<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first | second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_or for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::630
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_or<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first | second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_or for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return veorq_u8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return veorq_u16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return veorq_u32(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return veorq_u64(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return veorq_s8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return veorq_s16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return veorq_s32(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::694
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return veorq_s64(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::698
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return
                  vreinterpretq_f32_u32(
                     veorq_u32(
                        vreinterpretq_u32_f32(first),
                        vreinterpretq_u32_f32(second)
                     )
                  );
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::698
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type,const typename Vec::mask_type>;
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
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
return
                  vreinterpretq_f64_u64(
                     veorq_u64(
                        vreinterpretq_u64_f64(first),
                        vreinterpretq_u64_f64(second)
                     )
                  );
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for neon using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::738
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_xor<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first ^ second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_xor for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::738
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_xor<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first ^ second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_xor for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::738
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_xor<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first ^ second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_xor for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::738
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_xor<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first ^ second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_xor for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::738
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_xor<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first ^ second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_xor for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::738
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_xor<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first ^ second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_xor for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::738
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_xor<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first ^ second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_xor for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::738
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_xor<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first ^ second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_xor for neon using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: float
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::738
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_xor<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first ^ second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_xor for neon using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: neon.
       *        Data Type: double
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/mask.yaml::738
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_xor<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::imask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
return first ^ second;
            }
         };
   } // end of namespace functors for template specialization of imask_binary_xor for neon using double.
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_NEON_HPP