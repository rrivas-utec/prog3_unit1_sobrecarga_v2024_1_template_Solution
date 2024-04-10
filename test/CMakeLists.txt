cmake_minimum_required(VERSION 3.10.2)
project(prog3_unit1_sobrecarga_v2024_1_test)

set(CMAKE_CXX_STANDARD 20)

# Work Folders
include_directories(catch)

# Project files
file(GLOB project_files
        ../src/*.h
        ../src/*.cpp
        )

foreach(file ${project_files})
        message(STATUS "Found file: ${file}")
endforeach()

add_executable(${PROJECT_NAME}
        ${project_files}
        )
