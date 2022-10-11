cmake_minimum_required(VERSION 3.10)

project(TicTacToe)

set(SDL2_DIR ${CMAKE_CURRENT_LIST_DIR})
find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS})

add_executable(TicTacToe ./src/main.cpp ./src/TicTacToe.h)
target_link_libraries(TicTacToe ${SDL2_LIBRARIES})