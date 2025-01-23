cmake_minimum_required(VERSION 3.22)

project(ExternalGitRepo VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(add_git_submodule)
add_subdirectory(ExternalRepo/fmt)

# Specify the source file.
set(EXE_SOURCES "main.cpp")
# Set name for the executable.
set(EXECUTABLE_NAME Executable)
# Add the executable
add_executable(${EXECUTABLE_NAME} ${EXE_SOURCES})

# Include the fmt library's include directories
target_include_directories(${EXECUTABLE_NAME} PRIVATE ExternalRepo/fmt/include)

# Link the fmt library to the executable
target_link_libraries(${EXECUTABLE_NAME} PRIVATE fmt)