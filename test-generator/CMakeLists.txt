cmake_minimum_required(VERSION 3.10)
project(PersonJobTests)

set(CMAKE_CXX_STANDARD 17)

# Include headers from the src folder
include_directories(src)

# Source files (only ones without Drogon)
set(SOURCES
    src/Dummy.cpp
)

# Test files
file(GLOB TESTS "tests/*.cpp")

# Create test executable
add_executable(runTests ${SOURCES} ${TESTS})

# Link Google Test and pthread
target_link_libraries(runTests gtest gtest_main pthread)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
