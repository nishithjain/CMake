cmake_minimum_required(VERSION 3.22)

project(UsingFetchContent VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

include("${CMAKE_SOURCE_DIR}/cmake/CPM.cmake")
message(STATUS "Using CPM")
CPMAddPackage("gh:fmtlib/fmt#11.1.2")

set(EXECUTABLE_NAME Executable)
add_executable(${EXECUTABLE_NAME} "main.cpp")
target_link_libraries(${EXECUTABLE_NAME} PUBLIC fmt)