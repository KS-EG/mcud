cmake_minimum_required(VERSION 3.10)

project(mcud C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_EXE_LINKER_FLAGS "-static")

include_directories(
    .
    CONSOLE
    FILECOMMAND
)

add_executable(mcud
    CONSOLE/console.c
    FILECOMMAND/filecommand.c
    mcud.c
    mcud_exec.c
    version.c
)