#pragma once

#include <cstddef>
#include <random>

namespace football {

// team is identified by index in the teams vector
using TeamId = std::size_t;

// random number generator
using RandomGenerator = std::mt19937_64;

} // namespace football
