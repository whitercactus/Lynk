cmake_minimum_required(VERSION 3.7)

project(Lynk)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable(Lynk ${SOURCES})
target_link_libraries(Lynk ${SDL2_LIBRARIES})
