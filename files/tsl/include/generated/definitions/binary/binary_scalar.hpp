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
 * \file /Users/nhed/Development/TSL/tsl/include/generated/definitions/binary/binary_scalar.hpp
 * \date 2023-05-23
 * \brief Bit manipulation primitives.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_SCALAR_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_SCALAR_HPP


#include "../../declarations/binary.hpp"
#include <tuple>
namespace tsl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::96
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::96
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::96
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::96
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::96
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::96
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::96
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::96
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::100
       * @note: Benchmark what to use. Current implementation or: uint32_t c = (*((uint32_t *)&a) & *((uint32_t *)&b)); return *((float *)&c);
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
               return 0;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::115
       * @note: Benchmark what to use. Current implementation or: uint64_t c = (*((uint64_t *)&a) & *((uint64_t *)&b)); return *((double *)&c);
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );
double c = 0.0;
               auto a1 = reinterpret_cast<const unsigned char *>(&a);
               auto b1 = reinterpret_cast<const unsigned char *>(&b);
               auto c1 = reinterpret_cast<unsigned char *>(&c);
               c1[0] = a1[0] & b1[0];
               c1[1] = a1[1] & b1[1];
               c1[2] = a1[2] & b1[2];
               c1[3] = a1[3] & b1[3];
               c1[4] = a1[4] & b1[4];
               c1[5] = a1[5] & b1[5];
               c1[6] = a1[6] & b1[6];
               c1[7] = a1[7] & b1[7];
               return c;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::231
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return a | b;
            }
         };
   } // end of namespace functors for template specialization of binary_or for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::231
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return a | b;
            }
         };
   } // end of namespace functors for template specialization of binary_or for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::231
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return a | b;
            }
         };
   } // end of namespace functors for template specialization of binary_or for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::231
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return a | b;
            }
         };
   } // end of namespace functors for template specialization of binary_or for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::231
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return a | b;
            }
         };
   } // end of namespace functors for template specialization of binary_or for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::231
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return a | b;
            }
         };
   } // end of namespace functors for template specialization of binary_or for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::231
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return a | b;
            }
         };
   } // end of namespace functors for template specialization of binary_or for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::231
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return a | b;
            }
         };
   } // end of namespace functors for template specialization of binary_or for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::235
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_or is not supported by your hardware natively while it is forced by using native" );
uint32_t r = *((uint32_t *)&a) | *((uint32_t *)&b); return *(float*)&r;
            }
         };
   } // end of namespace functors for template specialization of binary_or for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::240
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_or<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_or is not supported by your hardware natively while it is forced by using native" );
uint64_t r = *((uint64_t *)&a) | *((uint64_t *)&b); return *(double*)&r;
            }
         };
   } // end of namespace functors for template specialization of binary_or for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::359
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::359
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::359
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::359
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::359
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::359
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::359
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::359
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::363
       * @note: Benchmark what to use. Current implementation or: uint32_t c = (*((uint32_t *)&a) ^ *((uint32_t *)&b)); return *((float *)&c);
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_xor is not supported by your hardware natively while it is forced by using native" );
float c = 0.0;
               auto a1 = reinterpret_cast<const unsigned char *>(&a);
               auto b1 = reinterpret_cast<const unsigned char *>(&b);
               auto c1 = reinterpret_cast<unsigned char *>(&c);
               c1[0] = a1[0] ^ b1[0];
               c1[1] = a1[1] ^ b1[1];
               c1[2] = a1[2] ^ b1[2];
               c1[3] = a1[3] ^ b1[3];
               return c;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::378
       * @note: Benchmark what to use. Current implementation or: uint64_t c = (*((uint64_t *)&a) ^ *((uint64_t *)&b)); return *((double *)&c);
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type,const typename Vec::register_type>;
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_xor is not supported by your hardware natively while it is forced by using native" );
double c = 0.0;
               auto a1 = reinterpret_cast<const unsigned char *>(&a);
               auto b1 = reinterpret_cast<const unsigned char *>(&b);
               auto c1 = reinterpret_cast<unsigned char *>(&c);
               c1[0] = a1[0] ^ b1[0];
               c1[1] = a1[1] ^ b1[1];
               c1[2] = a1[2] ^ b1[2];
               c1[3] = a1[3] ^ b1[3];
               c1[4] = a1[4] ^ b1[4];
               c1[5] = a1[5] ^ b1[5];
               c1[6] = a1[6] ^ b1[6];
               c1[7] = a1[7] ^ b1[7];
               return c;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::545
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::545
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::545
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::545
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::545
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::545
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::545
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::545
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::622
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8)
                   ? ((data >> (sizeof(typename Vec::register_type) * 8 - 1)) ? -1 : 0)
                   : static_cast<typename Vec::register_type>(static_cast<typename std::make_unsigned<typename Vec::register_type>::type>(data)) >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::622
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8)
                   ? ((data >> (sizeof(typename Vec::register_type) * 8 - 1)) ? -1 : 0)
                   : static_cast<typename Vec::register_type>(static_cast<typename std::make_unsigned<typename Vec::register_type>::type>(data)) >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::622
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8)
                   ? ((data >> (sizeof(typename Vec::register_type) * 8 - 1)) ? -1 : 0)
                   : static_cast<typename Vec::register_type>(static_cast<typename std::make_unsigned<typename Vec::register_type>::type>(data)) >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::622
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8)
                   ? ((data >> (sizeof(typename Vec::register_type) * 8 - 1)) ? -1 : 0)
                   : static_cast<typename Vec::register_type>(static_cast<typename std::make_unsigned<typename Vec::register_type>::type>(data)) >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::629
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::629
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::629
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::629
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::701
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8)
                   ? 0
                   : static_cast<typename Vec::register_type>(static_cast<typename std::make_unsigned<typename Vec::register_type>::type>(data)) >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::701
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8)
                   ? 0
                   : static_cast<typename Vec::register_type>(static_cast<typename std::make_unsigned<typename Vec::register_type>::type>(data)) >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::701
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8)
                   ? 0
                   : static_cast<typename Vec::register_type>(static_cast<typename std::make_unsigned<typename Vec::register_type>::type>(data)) >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::701
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8)
                   ? 0
                   : static_cast<typename Vec::register_type>(static_cast<typename std::make_unsigned<typename Vec::register_type>::type>(data)) >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::708
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::708
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::708
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical" (primitive shift_right_logical).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::708
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::787
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::787
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::787
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::787
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::787
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::787
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::787
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::787
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left_vector for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::865
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return (shift < 0 || shift >= sizeof(typename Vec::register_type) * 8)
                   ? ((data >> (sizeof(typename Vec::register_type) * 8 - 1)) ? -1 : 0)
                   : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::865
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return (shift < 0 || shift >= sizeof(typename Vec::register_type) * 8)
                   ? ((data >> (sizeof(typename Vec::register_type) * 8 - 1)) ? -1 : 0)
                   : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::865
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return (shift < 0 || shift >= sizeof(typename Vec::register_type) * 8)
                   ? ((data >> (sizeof(typename Vec::register_type) * 8 - 1)) ? -1 : 0)
                   : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::865
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return (shift < 0 || shift >= sizeof(typename Vec::register_type) * 8)
                   ? ((data >> (sizeof(typename Vec::register_type) * 8 - 1)) ? -1 : 0)
                   : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::872
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::872
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::872
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::872
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_vector for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::953
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8)
                   ? 0
                   : static_cast<typename Vec::register_type>(static_cast<typename std::make_unsigned<typename Vec::register_type>::type>(data)) >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::953
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8)
                   ? 0
                   : static_cast<typename Vec::register_type>(static_cast<typename std::make_unsigned<typename Vec::register_type>::type>(data)) >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::953
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8)
                   ? 0
                   : static_cast<typename Vec::register_type>(static_cast<typename std::make_unsigned<typename Vec::register_type>::type>(data)) >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::953
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8)
                   ? 0
                   : static_cast<typename Vec::register_type>(static_cast<typename std::make_unsigned<typename Vec::register_type>::type>(data)) >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::960
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::960
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::960
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right_logical_vector" (primitive shift_right_logical_vector).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/binary.yaml::960
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return (shift >= sizeof(typename Vec::register_type) * 8) ? 0 : data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right_logical_vector for scalar using uint64_t.
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_SCALAR_HPP