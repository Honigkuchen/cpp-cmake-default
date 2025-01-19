cmake_minimum_required(VERSION 3.10)

project(cpp-cmake-default VERSION 1.0.0 LANGUAGES CXX)
find_package(fmt REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
target_include_directories(${PROJECT_NAME} PRIVATE include)
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -Werror -Wconversion)
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)
add_subdirectory(test)
add_subdirectory(benchmark)
