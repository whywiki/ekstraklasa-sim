#pragma once

#include <span>

#include "core/game.hpp"
#include "core/team.hpp"
#include "core/types.hpp"

namespace football {

// decides the score of a game.
// play() must not change the object so many threads can share it
class ScoreModel {
public:
  [[nodiscard]] GameResult play(const Game &game, std::span<const Team> teams,
                                RandomGenerator &random) const;
};

} // namespace football
