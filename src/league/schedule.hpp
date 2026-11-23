#pragma once

#include <cstddef>
#include <vector>

#include "core/game.hpp"

namespace football {

// all games of one season
using Schedule = std::vector<Game>;

// every team plays every other team twice: once at home, once away
[[nodiscard]] Schedule makeSchedule(std::size_t teamCount);

} // namespace football
