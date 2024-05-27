cmake_minimum_required(VERSION 3.27)
project(choosingSortingAlgorithm C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(src/tri)
include_directories(src/utils)

add_executable(choosingSortingAlgorithm
        src/tri/Tri.c
        src/tri/Tri.h
        src/utils/Utils.c
        src/utils/Utils.h
        src/main.c)
