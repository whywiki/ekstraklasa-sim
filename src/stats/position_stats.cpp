#include "stats/position_stats.hpp"

namespace football {

PositionStats::PositionStats(std::size_t teamCount)
    : teamCount_(teamCount), counts_(teamCount * teamCount, 0) {}

void PositionStats::add([[maybe_unused]] std::span<const TableRow> finalTable) {
  // TODO(C): add one to each team final position
}

void PositionStats::merge([[maybe_unused]] const PositionStats &other) {
  // TODO(C): add the other counts to ours
}

double PositionStats::probability([[maybe_unused]] TeamId team,
                                  [[maybe_unused]] std::size_t position) const {
  // TODO(C): count / seasons
  return 0.0;
}

} // namespace football
