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
 * \file /Users/nhed/Development/TSL/tsl/include/generated/definitions/misc/misc_neon.hpp
 * \date 2023-05-23
 * \brief Miscellaneous primitives.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_NEON_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_NEON_HPP


#include "../../declarations/misc.hpp"
#include <tuple>
namespace tsl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/misc.yaml::234
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
            static typename Vec::register_type apply(
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );
alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               vst1q_u8(tmp.data(), data);
               for(unsigned idx = 0; idx < Vec::vector_element_count(); ++idx) {
                 conflicts[idx] = 0;
               }
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return vld1q_u8(conflicts.data());
            }
         };
   } // end of namespace functors for template specialization of conflict for neon using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/misc.yaml::234
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
            static typename Vec::register_type apply(
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );
alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               vst1q_u16(tmp.data(), data);
               for(unsigned idx = 0; idx < Vec::vector_element_count(); ++idx) {
                 conflicts[idx] = 0;
               }
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return vld1q_u16(conflicts.data());
            }
         };
   } // end of namespace functors for template specialization of conflict for neon using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/misc.yaml::234
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
            static typename Vec::register_type apply(
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );
alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               vst1q_u32(tmp.data(), data);
               for(unsigned idx = 0; idx < Vec::vector_element_count(); ++idx) {
                 conflicts[idx] = 0;
               }
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return vld1q_u32(conflicts.data());
            }
         };
   } // end of namespace functors for template specialization of conflict for neon using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: neon.
       *        Data Type: uint64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/misc.yaml::234
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
            static typename Vec::register_type apply(
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );
alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               vst1q_u64(tmp.data(), data);
               for(unsigned idx = 0; idx < Vec::vector_element_count(); ++idx) {
                 conflicts[idx] = 0;
               }
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return vld1q_u64(conflicts.data());
            }
         };
   } // end of namespace functors for template specialization of conflict for neon using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: neon.
       *        Data Type: int8_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/misc.yaml::234
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
            static typename Vec::register_type apply(
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );
alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               vst1q_s8(tmp.data(), data);
               for(unsigned idx = 0; idx < Vec::vector_element_count(); ++idx) {
                 conflicts[idx] = 0;
               }
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return vld1q_s8(conflicts.data());
            }
         };
   } // end of namespace functors for template specialization of conflict for neon using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: neon.
       *        Data Type: int16_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/misc.yaml::234
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
            static typename Vec::register_type apply(
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );
alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               vst1q_s16(tmp.data(), data);
               for(unsigned idx = 0; idx < Vec::vector_element_count(); ++idx) {
                 conflicts[idx] = 0;
               }
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return vld1q_s16(conflicts.data());
            }
         };
   } // end of namespace functors for template specialization of conflict for neon using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: neon.
       *        Data Type: int32_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/misc.yaml::234
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
            static typename Vec::register_type apply(
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );
alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               vst1q_s32(tmp.data(), data);
               for(unsigned idx = 0; idx < Vec::vector_element_count(); ++idx) {
                 conflicts[idx] = 0;
               }
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return vld1q_s32(conflicts.data());
            }
         };
   } // end of namespace functors for template specialization of conflict for neon using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/misc.yaml::234
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
            static typename Vec::register_type apply(
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );
alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               vst1q_s64(tmp.data(), data);
               for(unsigned idx = 0; idx < Vec::vector_element_count(); ++idx) {
                 conflicts[idx] = 0;
               }
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return vld1q_s64(conflicts.data());
            }
         };
   } // end of namespace functors for template specialization of conflict for neon using int64_t.
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_NEON_HPP