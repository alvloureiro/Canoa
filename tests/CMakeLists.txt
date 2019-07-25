# include(CanoaGoogleTest)

# set(GTEST_ROOT_DIR ${CANOA_THIRD_PARTY_DIR}/googletest)
# set(GTEST_LIB_DIR ${GTEST_ROOT_DIR}/lib)

# #ExternalProject_Get_Property("gtest" gtest_build_include_dirs)
# message(WARNING "GTEST ROOT DIR: " ${GTEST_ROOT_DIR})
# include_directories(${CANOA_SRC_ROOT_DIR}/src/googletest/googletest/include
#                     ${gtest_build_include_dirs})

# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G ${CMAKE_GENERATOR} .
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download
)
execute_process(COMMAND ${CMAKE_COMMAND} --build .
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download
)

# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This adds the following targets:
# gtest, gtest_main, gmock and gmock_main
add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src
                 ${CMAKE_BINARY_DIR}/googletest-build
)

# The gtest/gmock targets carry header search path dependencies
# automatically when using CMake 2.8.11 or later. Otherwise we
# have to add them here ourselves.
if(CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories(${gtest_SOURCE_DIR}/include
                        ${gmock_SOURCE_DIR}/include
    )
endif()

link_directories(${CMAKE_BINARY_DIR}/src
                 ${GTEST_LIBRARY_PATH})

add_subdirectory(commands)