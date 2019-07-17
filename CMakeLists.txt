cmake_minimum_required(VERSION 3.10)

project(Canoa)

include(CTest)

option(BUILD_CANOA_EXAMPLE "Include the example directory to build system" OFF)

set(CMAKE_CXX_STANDARD 17)

set(LIBRARY_NAME)

set(CANOA_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(CANOA_SRC_ROOT_DIR "${CANOA_ROOT_DIR}/src")
set(CANOA_COMMANDS_ROOT_DIR "${CANOA_SRC_ROOT_DIR}/commands")
set(CANOA_THIRD_PARTY_DIR "${CANOA_ROOT_DIR}/third-party")

list(APPEND CMAKE_MODULE_PATH "${CANOA_ROOT_DIR}/CMake")
message(STATUS "Current CMake module path: ${CMAKE_MODULE_PATH}")

if (BUILD_CANOA_EXAMPLE)
    message(WARNING "Add the example application to build system")
    add_subdirectory(example)
endif ()

if (BUILD_TESTING AND ${CMAKE_BUILD_TYPE} STREQUAL "Debug")
    add_subdirectory(tests)
endif ()

add_subdirectory(src)
