cmake_minimum_required(VERSION 3.10.2)
project(prog3_unit1_sobrecarga_v2024_1)

set(CMAKE_CXX_STANDARD 20)

include_directories(./src)
file(GLOB source_files
        main.cpp
        src/vector_enhancement.h
        src/vector_enhancement.cpp
        src/IntegerSet.cpp
        src/IntegerSet.h
)

add_executable(${PROJECT_NAME}
        ${source_files}
)

add_subdirectory(test)

