# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name
project(ZypherXY)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)

# Add the source directory files
set(SOURCE_FILES
    src/main.cpp
    src/zypherxy.cpp
    src/zypherxy-xzorrio.cpp
)

# Include directories
include_directories(src)

# Create the executable
add_executable(zypherxy ${SOURCE_FILES})
