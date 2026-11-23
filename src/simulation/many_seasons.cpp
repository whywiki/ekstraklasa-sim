#include "simulation/many_seasons.hpp"

namespace football {

PositionStats playManySeasons(std::span<const Team> teams,
                              [[maybe_unused]] const Schedule &schedule,
                              [[maybe_unused]] const ScoreModel &model,
                              [[maybe_unused]] std::size_t seasons,
                              [[maybe_unused]] std::uint64_t seed) {
  // TODO(wiki): call playSeason many times and add each result
  return PositionStats(teams.size());
}

} // namespace football
