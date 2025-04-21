cmake_minimum_required(VERSION 3.10)
project(Tasks)

# Use C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Collect source files
file(GLOB_RECURSE SOURCES
    "main.cpp"
    "TaskManager.cpp"
    "Task.cpp"
    "User.cpp"
)

# Define the executable
add_executable(Tasks ${SOURCES})

# Include header directory
target_include_directories(Tasks PRIVATE include)