cmake_minimum_required(VERSION 3.10)
project(ZadClassKcpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB SOURCES
    src/*.cc
    main.cc
)

add_executable(ZadClassKcpp ${SOURCES})
