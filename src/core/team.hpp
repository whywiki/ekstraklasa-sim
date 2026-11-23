#pragma once

#include <string>

namespace football {

// team data read from the input file. Doesn't change during running
struct Team {
  std::string name;
  double elo = 1500.0;    // strength rating;
  double homeBonus = 0.0; // extra strength when playing at home
};

} // namespace football
