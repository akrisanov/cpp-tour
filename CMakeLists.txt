cmake_minimum_required(VERSION 3.28)

project(cpp_tour LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cpp_tour)

if(APPLE)
    execute_process(
        COMMAND xcrun --show-sdk-path
        OUTPUT_VARIABLE MACOSX_SDK_PATH
        OUTPUT_STRIP_TRAILING_WHITESPACE
    )

    target_compile_options(cpp_tour PRIVATE
        -isysroot ${MACOSX_SDK_PATH}
    )

    target_link_options(cpp_tour PRIVATE
        -isysroot ${MACOSX_SDK_PATH}
    )
endif()

target_sources(cpp_tour
    PRIVATE
        ch03/vector_user.cpp
)

target_sources(cpp_tour
    PRIVATE
        FILE_SET cxx_modules TYPE CXX_MODULES
        FILES
            ch03/Vector.cppm
)

target_compile_options(cpp_tour PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)
