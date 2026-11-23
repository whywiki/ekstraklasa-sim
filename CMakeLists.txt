cmake_minimum_required(VERSION 3.20)
project(ekstraklasa_sim LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Shared code, used by the app and the tests
add_library(fsim_core
    src/core/hello.cpp
)
target_include_directories(fsim_core PUBLIC src)

if(MSVC)
    target_compile_options(fsim_core PRIVATE /W4)
else()
    target_compile_options(fsim_core PRIVATE -Wall -Wextra -Wpedantic)
endif()

# The program
add_executable(fsim src/app/main.cpp)
target_link_libraries(fsim PRIVATE fsim_core)

# Tests
enable_testing()
add_subdirectory(tests)
