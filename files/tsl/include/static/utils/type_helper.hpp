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
 * \file /Users/nhed/Development/TSL/tsl/include/static/utils/type_helper.hpp
 * \date 2023-05-23
 * \brief TODO.
 * \note
 * Git-Local Url : /Users/nhed/Development/TSL
 * Git-Remote Url: https://github.com/db-tu-dresden/TSL
 * Git-Branch    : main
 * Git-Commit    : d8d8cab (d8d8cab00a924b860087e6aad472b7c80d6c3b63)
 *
 */

#ifndef TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_STATIC_UTILS_TYPE_HELPER_HPP
#define TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_STATIC_UTILS_TYPE_HELPER_HPP


#include <cstddef>
#include <type_traits>
#include <typeinfo>
#include <cxxabi.h>
#include <memory>
#include <string>
#include <cstdlib>
#include <limits>
#include <iostream>
#include <tuple>
namespace tsl {
   enum class modifier {
        HEX,
        DEC,
        OCT,
        BIN
};
   template< class T >
   std::string type_name( ) {
      typedef typename std::remove_reference< T >::type TR;
      std::unique_ptr< char, void ( * )( void * ) > own (
         abi::__cxa_demangle( typeid( TR ).name( ), nullptr,nullptr, nullptr ),
         std::free
      );
      std::string r = own != nullptr ? own.get( ) : typeid( TR ).name( );
      if( std::is_const< TR >::value ) {
         r += " const";
      }
      if( std::is_volatile< TR >::value ) {
         r += " volatile";
         }
      if( std::is_lvalue_reference< T >::value ) {
         r += "&";
      } else if( std::is_rvalue_reference< T >::value ) {
         r += "&&";
      }
      return r;
   }
   #define TYPENAME( x ) type_name< decltype( x ) >( )
   template< typename T >
   struct is_tuple_impl : std::false_type { };   
   template< typename... Ts >
   struct is_tuple_impl< std::tuple< Ts... > > : std::true_type { };
   template< typename T >
   struct is_tuple : is_tuple_impl< std::remove_cv_t< T > > { };
   using offset_t = std::size_t;
   constexpr unsigned cilog2(unsigned val) { return val ? 1 + cilog2(val >> 1) : -1; }
   #ifndef __cpp_lib_assume_aligned
//c++20-standard - copied source from https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p1007r1.pdf
template<std::size_t N, typename T>
constexpr T* assume_aligned(T* ptr) noexcept {
#  if defined(__clang__) || (defined(__GNUC__) && !defined(__ICC))
   return reinterpret_cast<T*>(__builtin_assume_aligned(ptr, N));
#  elif defined(_MSC_VER)
   if ((reinterpret_cast<std::uintptr_t>(ptr) & ((1 << N) - 1)) == 0) {
      return ptr;
   } else {
      __assume(0);
   }
#  elif defined(__ICC)
   switch (N) {
      case 2: __assume_aligned(ptr, 2); break;
      case 4: __assume_aligned(ptr, 4); break;
      case 8: __assume_aligned(ptr, 8); break;
      case 16: __assume_aligned(ptr, 16); break;
      case 32: __assume_aligned(ptr, 32); break;
      case 64: __assume_aligned(ptr, 64); break;
      case 128: __assume_aligned(ptr, 128); break;
   }
   return ptr;
#  else
   return ptr;
#  endif
}
#else
   using std::assume_aligned;
#endif
} // end of namespace tsl
#endif //TUD_D2RG_TSL_USERS_NHED_DEVELOPMENT_TSL_TSL_INCLUDE_STATIC_UTILS_TYPE_HELPER_HPP