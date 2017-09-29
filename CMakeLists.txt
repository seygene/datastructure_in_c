cmake_minimum_required(VERSION 3.8)
project(datastructure_in_c)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c linked_list.h)
add_executable(datastructure_in_c ${SOURCE_FILES})