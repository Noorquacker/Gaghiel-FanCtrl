cmake_minimum_required(VERSION 3.5)

set(CMAKE_TOOLCHAIN_FILE /opt/Arduino-CMake-Toolchain/Arduino-toolchain.cmake)

project(gaghiel-fan LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(gaghiel-fan main.cpp)
target_link_arduino_libraries(gaghiel-fan AUTO_PUBLIC)
target_enable_arduino_upload(gaghiel-fan)
