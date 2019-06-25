cmake_minimum_required(VERSION 3.10)
project(Canoa)

option(BUILD_CANOA_EXAMPLE "Include the example directory to build system" OFF)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(LIBRARY_NAME)
set(CANOA_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

list(APPEND CMAKE_PREFIX_PATH "$ENV{QT_HOME_PATH}/lib/cmake")

if (BUILD_CANOA_EXAMPLE)
    message(WARNING "Add the example application to build system")
    add_subdirectory(example)
endif ()

add_subdirectory(src)
