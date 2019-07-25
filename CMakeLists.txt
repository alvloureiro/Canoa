cmake_minimum_required(VERSION 3.10)

project(Canoa)

include(CTest)

option(BUILD_CANOA_EXAMPLE "Include the example directory to build system" OFF)
option(BUILD_CANOA_TESTS "Include test directory to build system" OFF)

set(CMAKE_CXX_STANDARD 17)

if (${CMAKE_BUILD_TYPE} STREQUAL "")
    message(STATUS "Always build in debug mode")
    set(CMAKE_BUILD_TYPE "Debug")
endif ()

set(CANOA_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

list(APPEND CMAKE_MODULE_PATH ${CANOA_ROOT_DIR}/CMake)

set(CANOA_THIRD_PARTY_DIR ${CANOA_ROOT_DIR}/third-party)
set(CANOA_SRC_ROOT_DIR ${CANOA_ROOT_DIR}/src)
set(CANOA_COMMANDS_ROOT_DIR ${CANOA_SRC_ROOT_DIR}/commands)

set(LIBSERIAL_ROOT_DIR ${CANOA_THIRD_PARTY_DIR}/libserial)
set(LIBSERIAL_INCLUDE_DIR ${LIBSERIAL_ROOT_DIR}/include)
set(LIBSERIAL_LIB_DIR ${LIBSERIAL_ROOT_DIR}/lib)

if (BUILD_CANOA_EXAMPLE)
    message(AUTHOR_WARNING "Add the example application to build system")
    add_subdirectory(example)
endif ()

if (BUILD_CANOA_TESTS AND ${CMAKE_BUILD_TYPE} STREQUAL "Debug")
    message(AUTHOR_WARNING "Add tests to build system")
    add_subdirectory(tests)
endif ()

add_subdirectory(src)
