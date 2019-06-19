cmake_minimum_required(VERSION 3.14)
project(canoa)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

list(APPEND CMAKE_PREFIX_PATH "$ENV{HOME}/Qt.12.2/5.12.2/gcc_64/lib/cmake")

include_directories(src)

set(SRC src/Command.cpp
        src/Speed.cpp
        main.cpp
)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_executable(canoa ${SRC})
target_link_libraries(canoa Qt5::Core)