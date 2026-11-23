cmake_minimum_required(VERSION 3.20)
project(ekstraklasa_sim LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Shared code, used by the app and the tests
add_library(simulator_lib
    src/core/hello.cpp
    src/input/team_loader.cpp
    src/league/schedule.cpp
    src/score/score_model.cpp
    src/league/table.cpp
)
target_include_directories(simulator_lib PUBLIC src)

if(MSVC)
    target_compile_options(simulator_lib PRIVATE /W4)
else()
    target_compile_options(simulator_lib PRIVATE -Wall -Wextra -Wpedantic)
endif()

# The program
add_executable(simulator src/app/main.cpp)
target_link_libraries(simulator PRIVATE simulator_lib)

# Tests
enable_testing()
add_subdirectory(tests)
