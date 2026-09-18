cmake_minimum_required(VERSION 4.3)
project(UnitIO)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(UnitIO STATIC UnitIO.cpp)

target_sources(UnitIO PRIVATE
        FILE_SET HEADERS
        BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}
        FILES UnitIO.h
)

find_package(mp-units CONFIG REQUIRED)
target_link_libraries(UnitIO PUBLIC mp-units::mp-units)

if(MSVC)
    target_compile_options(UnitIO PRIVATE /utf-8)
endif()
