#include "score/score_model.hpp"

namespace football {

GameResult ScoreModel::play(const Game &game,
                            [[maybe_unused]] std::span<const Team> teams,
                            [[maybe_unused]] RandomGenerator &random) const {
  // TODO(B): pick goals based on team strength
  return {.home = game.home, .away = game.away, .homeGoals = 0, .awayGoals = 0};
}

} // namespace football
