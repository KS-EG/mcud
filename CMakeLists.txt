cmake_minimum_required(VERSION 3.10)

project(mcud C)

set(CMAKE_C_STANDARD 11)

include_directories(
    .
    CONSOLE
)

add_executable(mcud
    CONSOLE/console.c
    mcud.c
    mcud_exec.c
    version.c
)