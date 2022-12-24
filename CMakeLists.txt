cmake_minimum_required(VERSION 3.11)

set(CMAKE_CXX_STANDARD 17)


project(patterns)

# add_executable(patterns main.cpp)

include(CTest)
if(NOT gtest_FOUND)
    message("Google test library not installed, use it's source code from external libraries")
    add_subdirectory(3rd_party/gtest)
endif(NOT gtest_FOUND)


add_subdirectory(tests)
add_subdirectory(src)