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
 * \file /Users/nhed/Development/TSL/tsl/include/generated/declarations/ls.hpp
 * \date 2023-05-23
 * \brief Load/Store primitives
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_LS_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_LS_HPP


#include <tuple>
namespace tsl {
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_LOAD_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "load".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct load{};
   }
   /*
    * \brief Loads data from aligned memory into a vector register.
    * \details todo.
    * \param memory Aligned memory which should be transferred into a vector register.
    * \return Vector containing the loaded data.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type load(
          const typename Vec::base_type * memory
      ) {
         return functors::load<Vec, Idof>::apply(
            memory
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_LOADU_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "loadu".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct loadu{};
   }
   /*
    * \brief Loads data from (un)aligned memory into a vector register.
    * \details todo.
    * \param memory (Un)aligned memory which should be transferred into a vector register.
    * \return Vector containing the loaded data.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type loadu(
          const typename Vec::base_type * memory
      ) {
         return functors::loadu<Vec, Idof>::apply(
            memory
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_STORE_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "store".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct store{};
   }
   /*
    * \brief Stores data from a vector register to aligned memory.
    * \details todo.
    * \param memory Aligned memory where the data should be stored into.
    * \param data Vector containing the data.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      TSL_FORCE_INLINE void store(
          typename Vec::base_type * memory, const typename Vec::register_type data
      ) {
         functors::store<Vec, Idof>::apply(
            memory,data
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_STOREU_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "storeu".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct storeu{};
   }
   /*
    * \brief Stores data from a vector register to (un)aligned memory.
    * \details todo.
    * \param memory (Un)aligned memory where the data should be stored into.
    * \param data Vector containing the data.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      TSL_FORCE_INLINE void storeu(
          typename Vec::base_type * memory, const typename Vec::register_type data
      ) {
         functors::storeu<Vec, Idof>::apply(
            memory,data
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_SET1_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "set1".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct set1{};
   }
   /*
    * \brief Broadcasts a single value into all lanes of a vector register.
    * \details todo.
    * \param value Value which should be broadcasted.
    * \return Vector containing the same value in all lanes.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type set1(
          const typename Vec::base_type value
      ) {
         return functors::set1<Vec, Idof>::apply(
            value
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_SET_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "set".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct set{};
   }
   /*
    * \brief Transfers provided elements into a vector register.
    * \details todo.
    * \param args Values which should be transferred.
    * \return Vector register containing the values.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround, typename... Ts
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type set(
         Ts... args
      ) {
         return functors::set<Vec, Idof>::apply(
            args...
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_SEQUENCE_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "sequence".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct sequence{};
   }
   /*
    * \brief Creates a sequence [0..SIMD-Reg-Element-Count].
    * \details todo.
    * \return Vector register containing the sequence.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type sequence(
         
      ) {
         return functors::sequence<Vec, Idof>::apply(
            
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_CUSTOM_SEQUENCE_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "custom_sequence".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct custom_sequence{};
   }
   /*
    * \brief Creates a sequence.
    * \details todo.
    * \param start Start value for sequence.
    * \param stepwidth Stepwidth.
    * \return Vector register containing the sequence.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type custom_sequence(
          typename Vec::base_type start=0, [[maybe_unused]] typename Vec::base_type stepwidth=1
      ) {
         return functors::custom_sequence<Vec, Idof>::apply(
            start,stepwidth
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_GATHER_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "gather".
      template<VectorProcessingStyle Vec, typename IndicesType, int N, ImplementationDegreeOfFreedom Idof>
         struct gather{};
   }
   /*
    * \brief Transfers data from arbitrary locations into a vector register.
    * \details todo.
    * \param memory (Start)pointer of the memory (which is used as base for address calculation).
    * \param index Offsets array containing simd<offset_t, EXTENSION> register_types containing relative offsets to the start pointer (the number of array elements depend on the sizeof(offset_type)/sizeof(base_type) ratio, where sizeof(offset_type) should be 8).
    * \param scale Scale.
    * \return Vector containing gathered data.
    */
   template<
      VectorProcessingStyle Vec
      , typename IndicesType, int N, ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type gather(
          const void * memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
      ) {
         return functors::gather<Vec, IndicesType, N, Idof>::apply(
            memory,index,scale
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_MASK_GATHER_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "mask_gather".
      template<VectorProcessingStyle Vec, typename IndicesType, int N, ImplementationDegreeOfFreedom Idof>
         struct mask_gather{};
   }
   /*
    * \brief Transfers data from arbitrary locations into a vector register.
    * \details todo.
    * \param mask Mask indicating which lanes should be gathered.
    * \param source Vector register containing values which should be preserved depending on the mask (if mask[i] == 0).
    * \param memory (Start)pointer of the memory (which is used as base for address calculation).
    * \param index Offsets array containing simd<offset_t, EXTENSION> register_types containing relative offsets to the start pointer (the number of array elements depend on the sizeof(offset_type)/sizeof(base_type) ratio, where sizeof(offset_type) should be 8).
    * \param scale Scale.
    * \return Vector containing gathered data.
    */
   template<
      VectorProcessingStyle Vec
      , typename IndicesType, int N, ImplementationDegreeOfFreedom Idof = workaround
      #ifdef TSL_FUNCTORS_GATHER_STRUCT_DEFINED
      , typename std::enable_if_t<
         !std::is_same_v<
            typename functors::gather<Vec, IndicesType, N, Idof>::param_tuple_t,
            typename functors::mask_gather<Vec, IndicesType, N, Idof>::param_tuple_t>,
         std::nullptr_t
    > = nullptr
      #endif
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type gather(
          const typename Vec::mask_type mask, const typename Vec::register_type source, const void * memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
      ) {
         return functors::mask_gather<Vec, IndicesType, N, Idof>::apply(
            mask,source,memory,index,scale
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_SCATTER_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "scatter".
      template<VectorProcessingStyle Vec, int N, ImplementationDegreeOfFreedom Idof>
         struct scatter{};
   }
   /*
    * \brief Transfers data from a vector register to an arbitrary locations.
    * \details todo.
    * \param data Vector register containing values which should be scattered to memory.
    * \param memory (Start)pointer of the memory (which is used as base for address calculation).
    * \param index Offsets array containing simd<offset_t, EXTENSION> register_types containing relative offsets to the start pointer (the number of array elements depend on the sizeof(offset_type)/sizeof(base_type) ratio, where sizeof(offset_type) should be 8).
    * \param scale Scale.
    */
   template<
      VectorProcessingStyle Vec
      , int N, ImplementationDegreeOfFreedom Idof = workaround
   >
      TSL_FORCE_INLINE void scatter(
          const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
      ) {
         functors::scatter<Vec, N, Idof>::apply(
            data,memory,index,scale
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_MASK_SCATTER_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "mask_scatter".
      template<VectorProcessingStyle Vec, int N, ImplementationDegreeOfFreedom Idof>
         struct mask_scatter{};
   }
   /*
    * \brief Transfers data from a vector register to an arbitrary locations.
    * \details todo.
    * \param mask Mask indicating which lanes should be scattered.
    * \param data Vector register containing values which should be scattered to memory.
    * \param memory (Start)pointer of the memory (which is used as base for address calculation).
    * \param index Offsets array containing simd<offset_t, EXTENSION> register_types containing relative offsets to the start pointer (the number of array elements depend on the sizeof(offset_type)/sizeof(base_type) ratio, where sizeof(offset_type) should be 8).
    * \param scale Scale.
    */
   template<
      VectorProcessingStyle Vec
      , int N, ImplementationDegreeOfFreedom Idof = workaround
      #ifdef TSL_FUNCTORS_SCATTER_STRUCT_DEFINED
      , typename std::enable_if_t<
         !std::is_same_v<
            typename functors::scatter<Vec, N, Idof>::param_tuple_t,
            typename functors::mask_scatter<Vec, N, Idof>::param_tuple_t>,
         std::nullptr_t
    > = nullptr
      #endif
   >
      TSL_FORCE_INLINE void scatter(
          const typename Vec::mask_type mask, const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
      ) {
         functors::mask_scatter<Vec, N, Idof>::apply(
            mask,data,memory,index,scale
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_MASKED_SET1_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "masked_set1".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct masked_set1{};
   }
   /*
    * \brief Partially override a Vector with a single value.
    * \details todo.
    * \param src Base Vector.
    * \param mask Mask of elements to change.
    * \param value Value to set for elements where the mask bit is 1.
    * \return Base Vector, with the elements specified by mask changed to value.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type masked_set1(
          const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::base_type value
      ) {
         return functors::masked_set1<Vec, Idof>::apply(
            src,mask,value
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_MASKZ_MOV_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "maskz_mov".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct maskz_mov{};
   }
   /*
    * \brief Copy elements from a vector, where the mask bit it set, otherwise write zero
    * \details todo.
    * \param mask Mask of elements to change.
    * \param src Base Vector.
    * \return Base Vector, with the elements specified by mask changed to value.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type maskz_mov(
          const typename Vec::imask_type mask, const typename Vec::register_type src
      ) {
         return functors::maskz_mov<Vec, Idof>::apply(
            mask,src
         );
      }
   
namespace functors {
      // Definition of a preprocessor variable to detect overload ambiguity.
      #define TSL_FUNCTORS_MASK_MOV_STRUCT_DEFINED
      // Forward declaration of implementation struct for TSL-primitive "mask_mov".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct mask_mov{};
   }
   /*
    * \brief Merge two vectors while picking the source of each element based on the corresponding mask bit
    * \details todo.
    * \param src Vector to pick elements from if mask bit is 0
    * \param mask Mask of elements to change.
    * \param data Vector to pick elements from if mask bit is 1
    * \return Base Vector, with the elements specified by mask changed to value.
    */
   template<
      VectorProcessingStyle Vec
      , ImplementationDegreeOfFreedom Idof = workaround
   >
      [[nodiscard]] TSL_FORCE_INLINE typename Vec::register_type mask_mov(
          const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::register_type data
      ) {
         return functors::mask_mov<Vec, Idof>::apply(
            src,mask,data
         );
      }
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DECLARATIONS_LS_HPP