#include "simulation/season.hpp"

namespace football {

std::vector<TableRow> playSeason(std::span<const Team> teams,
                                 [[maybe_unused]] const Schedule &schedule,
                                 [[maybe_unused]] const ScoreModel &model,
                                 [[maybe_unused]] RandomGenerator &random) {
  // TODO(C): play every game and fill the table
  LeagueTable table(teams.size());
  return table.sorted();
}

} // namespace football
