#pragma once

#include <cstddef>
#include <span>
#include <vector>

#include "core/types.hpp"
#include "league/table.hpp"

namespace football {

// counts how often each team finished in each position
class PositionStats {
public:
  explicit PositionStats(std::size_t teamCount);

  // adds one final table
  void add(std::span<const TableRow> finalTable);

  // adds counts from another object (used to join results from threads)
  void merge(const PositionStats &other);

  // TODO(wiki): add relegationChance(team): chance to finish in the last 3
  // Chance (0 to 1) that a team finishes in a position. Position starts at 0
  [[nodiscard]] double probability(TeamId team, std::size_t position) const;

  [[nodiscard]] std::size_t teamCount() const { return teamCount_; }
  [[nodiscard]] std::size_t seasons() const { return seasons_; }

private:
  std::size_t teamCount_ = 0;
  std::size_t seasons_ = 0;
  std::vector<std::size_t> counts_; // teamCount x teamCount, row = team
};

} // namespace football
