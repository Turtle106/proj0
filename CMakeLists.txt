cmake_minimum_required(VERSION 3.20)
project(proj0 VERSION 0.1 LANGUAGES CXX)

include_directories(${PROJECT_SOURCE_DIR}/inc)
add_subdirectory(src)

enable_testing()
add_subdirectory(${PROJECT_SOURCE_DIR}/test)
