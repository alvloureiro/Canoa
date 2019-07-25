if (NOT DEFINED ${CANOA_TEST_NAME_EXECUTABLE})
    set(CANOA_TEST_NAME_EXECUTABLE "canoaTests")
endif ()

file(GLOB CANOA_COMMON_COMMANDS_TESTS "*.cpp")

add_executable(${CANOA_TEST_NAME_EXECUTABLE} ${CANOA_COMMON_COMMANDS_TESTS})

target_link_libraries(${CANOA_TEST_NAME_EXECUTABLE}
                      ${PROJECT_NAME}
                      serial
                      gtest
                      gmock
                      gtest_main
                      pthread)