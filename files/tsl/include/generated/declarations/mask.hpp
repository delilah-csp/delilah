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
 * \file /Users/nhed/Development/TSL/tsl/include/generated/declarations/mask.hpp
 * \date 2023-05-23
 * \brief Mask related primitives.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_MASK_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_MASK_HPP


#include <tuple>
namespace tsl {
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_TO_INTEGRAL_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "to_integral".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct to_integral{};
   }
   /*
    * \brief Forms an integral value from the most significant bits of every lane in a vector mask register.
    * \details todo.
    * \param vec_mask Vector mask register containing mask style data.
    * \return Integral value representing of the vector mask register.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::imask_type to_integral(
          const typename Vec::mask_type vec_mask
      ) {
         return functors::to_integral<Vec, Idof>::apply(
            vec_mask
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_TO_VECTOR_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "to_vector".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct to_vector{};
   }
   /*
    * \brief Forms an vector register from an integral where all bits are set in a lane if the corresponding mask bit is set to 1.
    * \details todo.
    * \param mask Vector mask register containing mask style data.
    * \return Integral value representing the vector mask register.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type to_vector(
          const typename Vec::mask_type mask
      ) {
         return functors::to_vector<Vec, Idof>::apply(
            mask
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_TO_MASK_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "to_mask".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct to_mask{};
   }
   /*
    * \brief Forms a mask type from an integral.
    * \details todo.
    * \param mask Integral value representing the vector mask register.
    * \return Vector mask register containing mask style data.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::mask_type to_mask(
          const typename Vec::imask_type mask
      ) {
         return functors::to_mask<Vec, Idof>::apply(
            mask
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_MASK_BINARY_AND_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "mask_binary_and".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and{};
   }
   /*
    * \brief Binary AND of two vector mask types.
    * \details todo.
    * \param first First mask.
    * \param second Second mask.
    * \return Vector mask register containing the result.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::mask_type mask_binary_and(
          const typename Vec::mask_type first, const typename Vec::mask_type second
      ) {
         return functors::mask_binary_and<Vec, Idof>::apply(
            first,second
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_IMASK_BINARY_AND_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "imask_binary_and".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct imask_binary_and{};
   }
   /*
    * \brief Binary AND of two vector integral mask types.
    * \details todo.
    * \param first First mask.
    * \param second Second mask.
    * \return Vector mask register containing the result.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
      #ifdef TSL_FUNCTORS_MASK_BINARY_AND_STRUCT_DEFINED
      , typename std::enable_if_t<
         !std::is_same_v<
            typename functors::mask_binary_and<Vec, Idof>::param_tuple_t,
            typename functors::imask_binary_and<Vec, Idof>::param_tuple_t>,
         std::nullptr_t
    > = nullptr
      #endif
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::imask_type mask_binary_and(
          const typename Vec::imask_type first, const typename Vec::imask_type second
      ) {
         return functors::imask_binary_and<Vec, Idof>::apply(
            first,second
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_MASK_BINARY_OR_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "mask_binary_or".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or{};
   }
   /*
    * \brief Binary OR of two vector mask types.
    * \details todo.
    * \param first First mask.
    * \param second Second mask.
    * \return Vector mask register containing the result.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::mask_type mask_binary_or(
          const typename Vec::mask_type first, const typename Vec::mask_type second
      ) {
         return functors::mask_binary_or<Vec, Idof>::apply(
            first,second
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_IMASK_BINARY_OR_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "imask_binary_or".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct imask_binary_or{};
   }
   /*
    * \brief Binary OR of two vector integral mask types.
    * \details todo.
    * \param first First mask.
    * \param second Second mask.
    * \return Vector mask register containing the result.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
      #ifdef TSL_FUNCTORS_MASK_BINARY_OR_STRUCT_DEFINED
      , typename std::enable_if_t<
         !std::is_same_v<
            typename functors::mask_binary_or<Vec, Idof>::param_tuple_t,
            typename functors::imask_binary_or<Vec, Idof>::param_tuple_t>,
         std::nullptr_t
    > = nullptr
      #endif
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::imask_type mask_binary_or(
          const typename Vec::imask_type first, const typename Vec::imask_type second
      ) {
         return functors::imask_binary_or<Vec, Idof>::apply(
            first,second
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_MASK_BINARY_XOR_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "mask_binary_xor".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor{};
   }
   /*
    * \brief Binary XOR of two vector mask types.
    * \details todo.
    * \param first First mask.
    * \param second Second mask.
    * \return Vector mask register containing the result.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::mask_type mask_binary_xor(
          const typename Vec::mask_type first, const typename Vec::mask_type second
      ) {
         return functors::mask_binary_xor<Vec, Idof>::apply(
            first,second
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_IMASK_BINARY_XOR_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "imask_binary_xor".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct imask_binary_xor{};
   }
   /*
    * \brief Binary XOR of two vector integral mask types.
    * \details todo.
    * \param first First mask.
    * \param second Second mask.
    * \return Vector mask register containing the result.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
      #ifdef TSL_FUNCTORS_MASK_BINARY_XOR_STRUCT_DEFINED
      , typename std::enable_if_t<
         !std::is_same_v<
            typename functors::mask_binary_xor<Vec, Idof>::param_tuple_t,
            typename functors::imask_binary_xor<Vec, Idof>::param_tuple_t>,
         std::nullptr_t
    > = nullptr
      #endif
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::imask_type mask_binary_xor(
          const typename Vec::imask_type first, const typename Vec::imask_type second
      ) {
         return functors::imask_binary_xor<Vec, Idof>::apply(
            first,second
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_INTEGRAL_ALL_TRUE_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "integral_all_true".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct integral_all_true{};
   }
   /*
    * \brief todo.
    * \details todo.
    * \return Integral value where all values are set to 1.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::imask_type integral_all_true(
         
      ) {
         return functors::integral_all_true<Vec, Idof>::apply(
            
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_INTEGRAL_ALL_FALSE_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "integral_all_false".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct integral_all_false{};
   }
   /*
    * \brief todo.
    * \details todo.
    * \return Integral value where all values are set to 1.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::imask_type integral_all_false(
         
      ) {
         return functors::integral_all_false<Vec, Idof>::apply(
            
         );
      }
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_MASK_HPP