cmake_minimum_required(VERSION 3.12.2)
project(delilah)

# Type
set(CMAKE_BUILD_TYPE Release)

# Headers
include_directories(include)

# Add uBPF library
add_subdirectory(ubpf)

# Sources
FILE(GLOB_RECURSE src src/*.c)
add_executable(delilah ${src})

# Libraries
target_link_libraries(delilah pthread)
target_link_libraries(delilah ubpf)

# Installation folder in Petalinux
install(TARGETS delilah RUNTIME DESTINATION bin)

# Add .profile to root home directory to automatically start Delilah
install(FILES .profile DESTINATION /home/root)
