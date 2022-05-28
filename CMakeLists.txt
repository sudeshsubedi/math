cmake_minimum_required(VERSION 3.10)

project(Math VERSION 0.1)

include_directories(include)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/complex.cpp
)