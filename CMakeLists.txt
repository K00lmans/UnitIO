cmake_minimum_required(VERSION 4.3)
project(UnitIO)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(llnl-units CONFIG REQUIRED)

add_library(UnitIO STATIC UnitIO.cpp)
target_link_libraries(UnitIO PRIVATE llnl-units::units)