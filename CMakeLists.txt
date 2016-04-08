cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(mpi_linker CXX)

add_subdirectory(src)

include_directories(src)

add_executable(mpi_linker main.cpp)
target_link_libraries(mpi_linker fuffa-static)

