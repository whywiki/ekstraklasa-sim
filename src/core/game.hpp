#pragma once

#include "core/types.hpp"

namespace football {

// game that will be played
struct Game {
  TeamId home = 0;
  TeamId away = 0;
  int round = 0; // which week of the season (starts at 1)
};

// game that was played
struct GameResult {
  TeamId home = 0;
  TeamId away = 0;
  int homeGoals = 0;
  int awayGoals = 0;
};

} // namespace football
