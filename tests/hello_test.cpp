#include <gtest/gtest.h>

#include "core/hello.hpp"

// remove. testing if setup works
TEST(Hello, ReturnsName) { EXPECT_EQ(hello(), "Ekstraklasa simulator"); }
