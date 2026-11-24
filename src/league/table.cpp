#include "league/table.hpp"

namespace football {

LeagueTable::LeagueTable(std::size_t teamCount) : rows_(teamCount) {
  for (TeamId id = 0; id < teamCount; ++id) {
    rows_[id].team = id;
  }
}

void LeagueTable::add([[maybe_unused]] const GameResult &result) {
  // TODO(sylwia): update points, goals, wins, draws, losses
}

std::vector<TableRow> LeagueTable::sorted() const {
  // TODO(sylwia): sort by points and after that by the other rules
  return rows_;
}

void LeagueTable::reset() {
  // TODO(sylwia): set all rows back to zero
}

} // namespace football
