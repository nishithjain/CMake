cmake_minimum_required(VERSION 3.22)

project(UsingFetchContent VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

# 1. Include the FetchContent Module
include(FetchContent)
# 2. Declare the Dependency
FetchContent_Declare(
    fmt # This declares a dependency named fmt.
    GIT_REPOSITORY https://github.com/fmtlib/fmt # Git URL
    GIT_TAG 11.1.2   # Defines the specific to fetch.
    GIT_SHALLOW TRUE # Fetches only the specified version
    )

# 3. Make the Dependency Available
FetchContent_MakeAvailable(fmt)

set(EXECUTABLE_NAME Executable)
add_executable(${EXECUTABLE_NAME} "main.cpp")

# 4. Link the Target Library
# Link the fmt library to the executable
target_link_libraries(${EXECUTABLE_NAME} PUBLIC fmt)