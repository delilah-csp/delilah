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
 * \file /Users/nhed/Development/TSL/tsl/include/generated/declarations/calc.hpp
 * \date 2023-05-23
 * \brief This file contains arithmetic primitives.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_CALC_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_CALC_HPP


#include <tuple>
namespace tsl {
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_ADD_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "add".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct add{};
   }
   /*
    * \brief Adds two vector registers.
    * \details todo.
    * \param vec_a First vector.
    * \param vec_b Second vector.
    * \return Vector containing result of the addition.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type add(
          const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
      ) {
         return functors::add<Vec, Idof>::apply(
            vec_a,vec_b
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_SUB_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "sub".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct sub{};
   }
   /*
    * \brief Subtracts two vector registers.
    * \details todo.
    * \param vec_a First vector.
    * \param vec_b Second vector.
    * \return Vector containing result of the subtraction.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type sub(
          const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
      ) {
         return functors::sub<Vec, Idof>::apply(
            vec_a,vec_b
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_MUL_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "mul".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct mul{};
   }
   /*
    * \brief Multiplies two vector registers.
    * \details todo.
    * \param vec_a First vector.
    * \param vec_b Second vector.
    * \return Vector containing result of the multiplication.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type mul(
          const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
      ) {
         return functors::mul<Vec, Idof>::apply(
            vec_a,vec_b
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_HADD_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "hadd".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct hadd{};
   }
   /*
    * \brief Reduces the elements to a sum.
    * \details todo.
    * \param value Input vector.
    * \return Scalar value after adding all elements in the vector.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::base_type hadd(
          const typename Vec::register_type value
      ) {
         return functors::hadd<Vec, Idof>::apply(
            value
         );
      }
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_CALC_HPP