cmake_minimum_required(VERSION 3.10)
project(Os)

# Use C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Collect source files
file(GLOB_RECURSE SOURCES
    "main.cpp"
    "Complex.cpp"
    "ArrayLike.cpp"
)

# Define the executable
add_executable(MyExecutable ${SOURCES})

# Include header directory
target_include_directories(MyExecutable PRIVATE include)