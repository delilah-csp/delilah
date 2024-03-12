cmake_minimum_required(VERSION 3.12.2)
project(delilah)

# Type
set(CMAKE_BUILD_TYPE Release)

# Headers
include_directories(include)

# Add uBPF library
add_subdirectory(ubpf)

# Sources
FILE(GLOB_RECURSE src src/*.c src/*.cpp)
add_executable(delilah ${src})

# Add _GNU_SOURCE flag
target_compile_definitions(delilah PRIVATE _GNU_SOURCE)

# Add TSL library
add_subdirectory(tsl)
target_link_libraries(delilah INTERFACE tsl)
target_include_directories(delilah PUBLIC tsl/include)

# Libraries
target_link_libraries(delilah PRIVATE pthread)
target_link_libraries(delilah PRIVATE ubpf)

# Installation folder in Petalinux
install(TARGETS delilah RUNTIME DESTINATION bin)

# Add .profile to root home directory to automatically start Delilah
install(FILES .profile DESTINATION /home/root)
