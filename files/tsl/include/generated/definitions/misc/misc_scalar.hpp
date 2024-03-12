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
 * \file /Users/nhed/Development/TSL/tsl/include/generated/definitions/misc/misc_scalar.hpp
 * \date 2023-05-23
 * \brief Miscellaneous primitives.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_SCALAR_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_SCALAR_HPP


#include "../../declarations/misc.hpp"
#include <tuple>
namespace tsl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::256
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::256
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::256
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::256
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::256
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::256
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::256
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::256
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
return 0;
            }
         };
   } // end of namespace functors for template specialization of conflict for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::363
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::363
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::363
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::363
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::363
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::363
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::363
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/misc.yaml::363
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type,const typename Vec::register_type>;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
return 1;
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for scalar using int64_t.
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_SCALAR_HPP