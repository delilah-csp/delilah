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
 * \file /Users/nhed/Development/TSL/tsl/include/generated/declarations/binary.hpp
 * \date 2023-05-23
 * \brief Bit manipulation primitives.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_BINARY_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_BINARY_HPP


#include <tuple>
namespace tsl {
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_BINARY_AND_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "binary_and".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct binary_and{};
   }
   /*
    * \brief Binary ANDs two vector registers.
    * \details todo.
    * \param a First vector.
    * \param b Second vector.
    * \return Vector containing result of the binary AND.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type binary_and(
          const typename Vec::register_type a, const typename Vec::register_type b
      ) {
         return functors::binary_and<Vec, Idof>::apply(
            a,b
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_BINARY_OR_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "binary_or".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct binary_or{};
   }
   /*
    * \brief Binary ANDs two vector registers.
    * \details todo.
    * \param a First vector.
    * \param b Second vector.
    * \return Vector containing result of the binary AND.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type binary_or(
          const typename Vec::register_type a, const typename Vec::register_type b
      ) {
         return functors::binary_or<Vec, Idof>::apply(
            a,b
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_BINARY_XOR_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "binary_xor".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct binary_xor{};
   }
   /*
    * \brief Binary XORs two vector registers.
    * \details todo.
    * \param a First vector.
    * \param b Second vector.
    * \return Vector containing result of the binary XOR.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type binary_xor(
          const typename Vec::register_type a, const typename Vec::register_type b
      ) {
         return functors::binary_xor<Vec, Idof>::apply(
            a,b
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_SHIFT_LEFT_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "shift_left".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct shift_left{};
   }
   /*
    * \brief Shifts data to left by n bits (shifting in 0).
    * \details todo.
    * \param data Data.
    * \param shift Amount of bits, data should be shifted.
    * \return Vector containing result of the right shift.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type shift_left(
          const typename Vec::register_type data, const unsigned int shift
      ) {
         return functors::shift_left<Vec, Idof>::apply(
            data,shift
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_SHIFT_RIGHT_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "shift_right".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct shift_right{};
   }
   /*
    * \brief Shifts data to right by n bits (shifting in the sign bit).
    * \details todo.
    * \param data Data.
    * \param shift Amount of bits, data should be shifted.
    * \return Vector containing result of the right shift.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type shift_right(
          const typename Vec::register_type data, const unsigned int shift
      ) {
         return functors::shift_right<Vec, Idof>::apply(
            data,shift
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_SHIFT_RIGHT_LOGICAL_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "shift_right_logical".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical{};
   }
   /*
    * \brief Shifts data to right by n bits (shifting in 0).
    * \details todo.
    * \param data Data.
    * \param shift Amount of bits, data should be shifted.
    * \return Vector containing result of the right shift.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type shift_right_logical(
          const typename Vec::register_type data, const unsigned int shift
      ) {
         return functors::shift_right_logical<Vec, Idof>::apply(
            data,shift
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_SHIFT_LEFT_VECTOR_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "shift_left_vector".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct shift_left_vector{};
   }
   /*
    * \brief Shifts data to left by n bits (shifting in 0).
    * \details todo.
    * \param data Data.
    * \param shift Amount of bits, data should be shifted.
    * \return Vector containing result of the left shift.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type shift_left_vector(
          const typename Vec::register_type data, const typename Vec::register_type shift
      ) {
         return functors::shift_left_vector<Vec, Idof>::apply(
            data,shift
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_SHIFT_RIGHT_VECTOR_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "shift_right_vector".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct shift_right_vector{};
   }
   /*
    * \brief Shifts data to right by n bits (shifting in sign bits).
    * \details todo.
    * \param data Data.
    * \param shift Amount of bits, data should be shifted.
    * \return Vector containing result of the left shift.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type shift_right_vector(
          const typename Vec::register_type data, const typename Vec::register_type shift
      ) {
         return functors::shift_right_vector<Vec, Idof>::apply(
            data,shift
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_SHIFT_RIGHT_LOGICAL_VECTOR_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "shift_right_logical_vector".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct shift_right_logical_vector{};
   }
   /*
    * \brief Shifts data to right by n bits (shifting in 0).
    * \details todo.
    * \param data Data.
    * \param shift Amount of bits, data should be shifted.
    * \return Vector containing result of the left shift.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type shift_right_logical_vector(
          const typename Vec::register_type data, const typename Vec::register_type shift
      ) {
         return functors::shift_right_logical_vector<Vec, Idof>::apply(
            data,shift
         );
      }
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_BINARY_HPP