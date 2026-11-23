#pragma once

#include <cstddef>
#include <vector>

#include "core/game.hpp"
#include "core/types.hpp"

namespace football {

// one row of the league table
struct TableRow {
  TeamId team = 0;
  int gamesPlayed = 0;
  int wins = 0;
  int draws = 0;
  int losses = 0;
  int goalsScored = 0;
  int goalsConceded = 0; // goals let in
  int points = 0;

  [[nodiscard]] constexpr int goalDifference() const {
    return goalsScored - goalsConceded;
  }
};

class LeagueTable {
public:
  explicit LeagueTable(std::size_t teamCount);

  // updates both teams after a gameu
  void add(const GameResult &result);

  // rows from first place to last.
  [[nodiscard]] std::vector<TableRow> sorted() const;

  // clears all rows so the table can be reused
  void reset();

private:
  std::vector<TableRow> rows_; // index = TeamId
};

} // namespace football
