cmake_minimum_required(VERSION 3.25)

project(cpp_tour LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(
    -Wall
    -Wextra
    -Wpedantic
)

# add_executable(ch01_00 ch01/00_simplest_program.cpp)
# add_executable(ch01_01 ch01/01_hello_world.cpp)
# add_executable(ch01_02 ch01/02_calling_functions.cpp)
# add_executable(ch01_03 ch01/03_declaring_functions.cpp)
# add_executable(ch01_04 ch01/04_function_overloading.cpp)
# add_executable(ch02_00 ch02/00_structs.cpp)
# add_executable(ch02_01 ch02/01_classes.cpp)
# add_executable(ch02_02 ch02/02_enumerations.cpp)
add_executable(ch02_03 ch02/03_unions.cpp)
