cmake_minimum_required(VERSION 3.12.2)
project(delilah)

# Config
file(READ ".delilah" conf)

## Mem
string(REGEX MATCH "DELILAH_CONFIG_MEM=([A-Z]*)" _ ${conf})
set(CONF_MEM ${CMAKE_MATCH_1})
message("Using memory backend: ${CONF_MEM}")

if("${CONF_MEM}" STREQUAL "UDMA")
  add_definitions(-DDELILAH_USE_UDMA=1)
elseif("${CONF_MEM}" STREQUAL "MALLOC")
  add_definitions(-DDELILAH_USE_MALLOC=1)
elseif("${CONF_MEM}" STREQUAL "DIRECT")
  add_definitions(-DDELILAH_USE_DIRECT=1)
endif()

## IRQ
string(REGEX MATCH "DELILAH_CONFIG_IRQ=([A-Z]*)" _ ${conf})
set(CONF_IRQ ${CMAKE_MATCH_1})
message("Using IRQ backend: ${CONF_IRQ}")

if("${CONF_IRQ}" STREQUAL "GPIO")
  add_definitions(-DDELILAH_USE_GPIO=1)
endif()

find_file(KDELILAH kdelilah.h)

# Type
set(CMAKE_BUILD_TYPE Release)

# Headers
include_directories(include)

# Sources
FILE(GLOB_RECURSE src src/*.c)
add_executable(delilah ${src})

# Libraries
target_link_libraries(delilah pthread)

# Installation folder in Petalinux
install(TARGETS delilah RUNTIME DESTINATION bin)
