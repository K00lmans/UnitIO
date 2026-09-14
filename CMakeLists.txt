cmake_minimum_required(VERSION 4.3)
project(UnitIO)

set(CMAKE_CXX_STANDARD 26)

add_library(UnitIO STATIC UnitIO.cpp)

find_package(mp-units CONFIG REQUIRED)
target_link_libraries(UnitIO PRIVATE mp-units::mp-units)
