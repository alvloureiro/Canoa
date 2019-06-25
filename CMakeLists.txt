cmake_minimum_required(VERSION 3.10)
project(Canoa)

option(BUILD_CANOA_EXAMPLE "Include the example directory to build system" OFF)

set(CMAKE_CXX_STANDARD 17)

set(LIBRARY_NAME)
set(CANOA_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

if (BUILD_CANOA_EXAMPLE)
    message(WARNING "Add the example application to build system")
    add_subdirectory(example)
endif ()

add_subdirectory(src)
