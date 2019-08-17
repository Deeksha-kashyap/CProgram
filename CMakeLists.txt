# cmake_minimum_required(VERSION <specify CMake version here>)
project(CProgram C)

set(CMAKE_C_STANDARD 99)

add_executable(CProgram main.c Sample.c test.c)