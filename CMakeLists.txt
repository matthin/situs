cmake_minimum_required(VERSION 2.6)
project(situs)

# Used by YouCompleteMe
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

add_subdirectory(src)
include_directories(include)

add_library(
  situs
  STATIC
  ${situsSourceFiles}
)

add_definitions(-std=gnu11)
set(CMAKE_CXX_FLAGS -Wall -Wextra -pedantic)

add_executable(situsApp src/situs.c)
target_link_libraries(situsApp situs)
