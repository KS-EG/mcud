cmake_minimum_required(VERSION 3.10)

project(mcud C)

set(CMAKE_C_STANDARD 11)

include_directories(
    .
)

add_executable(mcud
    mcud.c
)