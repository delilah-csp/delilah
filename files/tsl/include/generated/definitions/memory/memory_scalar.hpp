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
 * \file /Users/nhed/Development/TSL/tsl/include/generated/definitions/memory/memory_scalar.hpp
 * \date 2023-05-23
 * \brief Memory related primitives.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_MEMORY_MEMORY_SCALAR_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_MEMORY_MEMORY_SCALAR_HPP


#include "../../declarations/memory.hpp"
#include <tuple>
namespace tsl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate" (primitive allocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::32
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate" (primitive allocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::32
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate" (primitive allocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::32
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate" (primitive allocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::32
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate" (primitive allocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::32
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate" (primitive allocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::32
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate" (primitive allocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::32
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate" (primitive allocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::32
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate" (primitive allocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::32
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate" (primitive allocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::32
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned" (primitive allocate_aligned).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::68
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t,std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned" (primitive allocate_aligned).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::68
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t,std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned" (primitive allocate_aligned).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::68
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t,std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned" (primitive allocate_aligned).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::68
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t,std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned" (primitive allocate_aligned).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::68
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t,std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned" (primitive allocate_aligned).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::68
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t,std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned" (primitive allocate_aligned).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::68
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t,std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned" (primitive allocate_aligned).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::68
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t,std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned" (primitive allocate_aligned).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::68
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t,std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "allocate_aligned" (primitive allocate_aligned).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::68
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct allocate_aligned<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::base_type *;
            using param_tuple_t = std::tuple<std::size_t,std::size_t>;
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
            static typename Vec::base_type * apply(
                std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
            ) {
return reinterpret_cast<typename Vec::base_type*>(malloc(count_bytes));
            }
         };
   } // end of namespace functors for template specialization of allocate_aligned for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate" (primitive deallocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::97
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {
return free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate" (primitive deallocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::97
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {
return free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate" (primitive deallocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::97
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {
return free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate" (primitive deallocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::97
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {
return free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate" (primitive deallocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::97
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {
return free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate" (primitive deallocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::97
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {
return free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate" (primitive deallocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::97
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {
return free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate" (primitive deallocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::97
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {
return free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate" (primitive deallocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::97
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {
return free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "deallocate" (primitive deallocate).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::97
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct deallocate<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * ptr
            ) {
return free(ptr);
            }
         };
   } // end of namespace functors for template specialization of deallocate for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp" (primitive memory_cp).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::138
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *,typename Vec::base_type const *,std::size_t,int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {
std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp" (primitive memory_cp).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::138
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *,typename Vec::base_type const *,std::size_t,int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {
std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp" (primitive memory_cp).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::138
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *,typename Vec::base_type const *,std::size_t,int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {
std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp" (primitive memory_cp).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::138
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *,typename Vec::base_type const *,std::size_t,int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {
std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp" (primitive memory_cp).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::138
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *,typename Vec::base_type const *,std::size_t,int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {
std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp" (primitive memory_cp).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::138
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *,typename Vec::base_type const *,std::size_t,int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {
std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp" (primitive memory_cp).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::138
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *,typename Vec::base_type const *,std::size_t,int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {
std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp" (primitive memory_cp).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::138
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *,typename Vec::base_type const *,std::size_t,int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {
std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp" (primitive memory_cp).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::138
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *,typename Vec::base_type const *,std::size_t,int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {
std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "memory_cp" (primitive memory_cp).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/memory.yaml::138
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct memory_cp<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type *,typename Vec::base_type const *,std::size_t,int>;
            static constexpr bool parameters_queryable() {
               return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * dst, typename Vec::base_type const * src, std::size_t count_bytes, [[maybe_unused]] int copy_kind
            ) {
std::memcpy(reinterpret_cast<void *>(dst), reinterpret_cast<void const *>(src), count_bytes);
            }
         };
   } // end of namespace functors for template specialization of memory_cp for scalar using double.
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_MEMORY_MEMORY_SCALAR_HPP