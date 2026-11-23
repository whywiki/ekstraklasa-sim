include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
# Needed on Windows (MSVC)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(simulator_tests
    hello_test.cpp
)
target_link_libraries(simulator_tests PRIVATE simulator_lib GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(simulator_tests)
