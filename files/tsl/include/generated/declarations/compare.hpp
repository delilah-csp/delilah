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
 * \file /Users/nhed/Development/TSL/tsl/include/generated/declarations/compare.hpp
 * \date 2023-05-23
 * \brief Compare primitives.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_COMPARE_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_COMPARE_HPP


#include <tuple>
namespace tsl {
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_EQUAL_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "equal".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct equal{};
   }
   /*
    * \brief Compares two vector registers for equality.
    * \details todo.
    * \param vec_a Left vector.
    * \param vec_b Right vector.
    * \return Vector mask type indicating whether vec_a[*]==vec_b[*].
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::mask_type equal(
          const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
      ) {
         return functors::equal<Vec, Idof>::apply(
            vec_a,vec_b
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_NEQUAL_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "nequal".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct nequal{};
   }
   /*
    * \brief Compares two vector registers for inequality.
    * \details todo.
    * \param vec_a Left vector.
    * \param vec_b Right vector.
    * \return Vector mask type indicating whether vec_a[*]==vec_b[*].
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::mask_type nequal(
          const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
      ) {
         return functors::nequal<Vec, Idof>::apply(
            vec_a,vec_b
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_BETWEEN_INCLUSIVE_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "between_inclusive".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct between_inclusive{};
   }
   /*
    * \brief Checks if the values of a vector are in a specific range (min[*] <= d[*] <= max[*]).
    * \details todo.
    * \param vec_data Data vector.
    * \param vec_min Minimum vector.
    * \param vec_max Maximum vector.
    * \return Vector mask type indicating whether the data is in the given range.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::mask_type between_inclusive(
          const typename Vec::register_type vec_data, const typename Vec::register_type vec_min, typename Vec::register_type const vec_max
      ) {
         return functors::between_inclusive<Vec, Idof>::apply(
            vec_data,vec_min,vec_max
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_LESS_THAN_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "less_than".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct less_than{};
   }
   /*
    * \brief Tests whether left elements are smaller than the corresponding right ones.
    * \details todo.
    * \param vec_a Left vector.
    * \param vec_b Right vector.
    * \return Vector mask type indicating whether vec_a[*] < vec_b[*].
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::mask_type less_than(
          const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
      ) {
         return functors::less_than<Vec, Idof>::apply(
            vec_a,vec_b
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_GREATER_THAN_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "greater_than".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct greater_than{};
   }
   /*
    * \brief Tests whether left elements are larger than or equal to the corresponding right ones.
    * \details todo.
    * \param vec_a Left vector.
    * \param vec_b Right vector.
    * \return Vector mask type indicating whether vec_a[*] < vec_b[*].
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::mask_type greater_than(
          const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
      ) {
         return functors::greater_than<Vec, Idof>::apply(
            vec_a,vec_b
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_LESS_THAN_OR_EQUAL_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "less_than_or_equal".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct less_than_or_equal{};
   }
   /*
    * \brief Tests whether left elements are smaller than or equal to the corresponding right ones.
    * \details todo.
    * \param vec_a Left vector.
    * \param vec_b Right vector.
    * \return Vector mask type indicating whether vec_a[*] < vec_b[*].
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::mask_type less_than_or_equal(
          const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
      ) {
         return functors::less_than_or_equal<Vec, Idof>::apply(
            vec_a,vec_b
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_GREATER_THAN_OR_EQUAL_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "greater_than_or_equal".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct greater_than_or_equal{};
   }
   /*
    * \brief Tests whether left elements are larger than the corresponding right ones.
    * \details todo.
    * \param vec_a Left vector.
    * \param vec_b Right vector.
    * \return Vector mask type indicating whether vec_a[*] < vec_b[*].
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::mask_type greater_than_or_equal(
          const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
      ) {
         return functors::greater_than_or_equal<Vec, Idof>::apply(
            vec_a,vec_b
         );
      }
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_COMPARE_HPP