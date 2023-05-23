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
 * \file /Users/nhed/Development/TSL/tsl/include/generated/definitions/compare/compare_scalar.hpp
 * \date 2023-05-23
 * \brief Compare primitives.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_SCALAR_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_SCALAR_HPP


#include "../../declarations/compare.hpp"
#include <tuple>
namespace tsl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "equal" (primitive equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::129
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct equal<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
return (vec_a == vec_b);
            }
         };
   } // end of namespace functors for template specialization of equal for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "nequal" (primitive nequal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::267
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct nequal<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
return (vec_a != vec_b);
            }
         };
   } // end of namespace functors for template specialization of nequal for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::459
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return (vec_a < vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::459
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return (vec_a < vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::459
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return (vec_a < vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::459
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return (vec_a < vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::459
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return (vec_a < vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::459
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return (vec_a < vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::459
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return (vec_a < vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::459
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return (vec_a < vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::459
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
return (vec_a < vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than" (primitive less_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::459
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
return (vec_a < vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::575
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return (vec_a > vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::575
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return (vec_a > vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::575
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return (vec_a > vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::575
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return (vec_a > vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::575
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return (vec_a > vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::575
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return (vec_a > vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::575
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return (vec_a > vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::575
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return (vec_a > vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::575
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
return (vec_a > vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::575
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
return (vec_a > vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::699
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return (vec_a <= vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::699
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return (vec_a <= vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::699
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return (vec_a <= vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::699
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return (vec_a <= vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::699
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return (vec_a <= vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::699
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return (vec_a <= vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::699
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return (vec_a <= vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::699
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return (vec_a <= vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::699
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
return (vec_a <= vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::699
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
return (vec_a <= vec_b);
            }
         };
   } // end of namespace functors for template specialization of less_than_or_equal for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::822
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
return (vec_a >= vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::822
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
return (vec_a >= vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::822
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
return (vec_a >= vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::822
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
return (vec_a >= vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::822
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
return (vec_a >= vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::822
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
return (vec_a >= vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::822
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
return (vec_a >= vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::822
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
return (vec_a >= vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::822
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
return (vec_a >= vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       *      Yaml Source: primitive_data/primitives/compare.yaml::822
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
return (vec_a >= vec_b);
            }
         };
   } // end of namespace functors for template specialization of greater_than_or_equal for scalar using double.
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_SCALAR_HPP