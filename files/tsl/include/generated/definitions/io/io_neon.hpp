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
 * \file /Users/nhed/Development/TSL/tsl/include/generated/definitions/io/io_neon.hpp
 * \date 2023-05-23
 * \brief Input/Output primitives.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_IO_IO_NEON_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_IO_IO_NEON_HPP


#include "../../declarations/io.hpp"
#include <tuple>
namespace tsl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
       * @details:
       * Target Extension: neon.
       *        Data Type: int64_t
       *  Extension Flags: ['neon']
       *      Yaml Source: primitive_data/primitives/io.yaml::127
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_ostream<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = std::ostream &;
            using param_tuple_t = std::tuple<std::ostream &,typename Vec::register_type const,modifier>;
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
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {
out << data[1]<< "|" << data[0] << "\n";
               return out;
            }
         };
   } // end of namespace functors for template specialization of to_ostream for neon using int64_t.
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_GENERATED_DEFINITIONS_IO_IO_NEON_HPP