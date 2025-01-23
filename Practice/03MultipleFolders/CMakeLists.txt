cmake_minimum_required(VERSION 3.20)
project(CMakeMultipleFolders)

# Add Sub-directories
add_subdirectory(Application)
add_subdirectory(Libraries)

set(MY_CACHE_VAR "DefaultValue" 
    CACHE STRING "Description of MY_CACHE_VAR")

