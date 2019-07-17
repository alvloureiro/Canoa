
set(GTEST_ROOT_DIR "${CANOA_THIRD_PARTY_DIR}/googletest")
set(GTEST_INCLUDE_DIR "${GTEST_ROOT_DIR}/include")
set(GTEST_LIB_DIR "${GTEST_ROOT_DIR}/lib")

include_directories(${CANOA_SRC_ROOT_DIR}
                    ${GTEST_INCLUDE_DIR})

link_directories(${CMAKE_BINARY_DIR}/src
                 ${GTEST_LIB_DIR})

add_subdirectory(commands)