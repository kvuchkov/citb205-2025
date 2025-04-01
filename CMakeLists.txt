cmake_minimum_required(VERSION 3.22)

project(darsi)

set(CMAKE_CXX_STANDARD 17)

file(GLOB sources RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp")

add_executable(darsi ${sources})
