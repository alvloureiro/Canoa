include(ExternalProject)

set(CANOA_EXTERNAL_PROJECT_NAME "googletest")

set(CANOA_CMAKE_MODULE_DIR "${PROJECT_SOURCE_DIR}/CMake")

if (${CMAKE_BUILD_TYPE} STREQUAL "Debug")
    set(CANOA_INSTALL_PREFIX ${CANOA_ROOT_DIR}/output)
    set(EXTERNAL_PROJECT_DESTINATION_LIB_DIR ${CANOA_INSTALL_PREFIX}/lib)
    set(EXTERNAL_GTEST_PROJECT_DESTINATION_INCLUDE_DIR
            ${CANOA_INSTALL_PREFIX}/include/${CANOA_EXTERNAL_PROJECT_NAME})
endif ()

if ("${CANOA_ROOT_DIR}" STREQUAL "")
    set(CANOA_ROOT_DIR "$ENV{PWD}/../")
endif ()

if ("${CANOA_THIRD_PARTY_DIR}" STREQUAL "")
    set(CANOA_THIRD_PARTY_DIR "${CANOA_ROOT_DIR}/third-party")
endif ()

if ("${CANOA_GTEST_DOWNLOAD_DIR}" STREQUAL "")
    message(STATUS "Set googletest download dir")
    set(CANOA_GTEST_DOWNLOAD_DIR ${CANOA_THIRD_PARTY_DIR}/googletest)
endif ()

file(REMOVE "${CANOA_GTEST_DOWNLOAD_DIR}/CMakeCache.txt")

ExternalProject_Add("${CANOA_EXTERNAL_PROJECT_NAME}"
        PREFIX            "${CANOA_GTEST_DOWNLOAD_DIR}"
        GIT_REPOSITORY    "git@github.com:google/googletest.git"
        GIT_TAG           "release-1.8.1"
        GIT_PROGRESS      ON
        GIT_SHALLOW       ON
        BUILD_COMMAND     ${MAKE}
        UPDATE_COMMAND    ""
        INSTALL_COMMAND   make DESTDIR=${EXTERNAL_PROJECT_DESTINATION_LIB_DIR} install
        )