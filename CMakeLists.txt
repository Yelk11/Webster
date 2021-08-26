cmake_minimum_required(VERSION 3.16)
project(Compiler)
include_directories(
		${PROJECT_SOURCE_DIR}/include
		${PROJECT_SOURCE_DIR}/src
)
file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/include/*.h"
		"${PROJECT_SOURCE_DIR}/src/*.c"
        )
add_executable(Compiler ${all_SRCS})