#include <gtest/gtest.h>

#include "league/table.hpp"

TEST(LeagueTable, NewTableHasOneRowPerTeam) {
  const football::LeagueTable table(18);
  EXPECT_EQ(table.sorted().size(), 18u);
}

TEST(LeagueTable, NewTableStartsAtZero) {
  const football::LeagueTable table(4);
  for (const auto &row : table.sorted()) {
    EXPECT_EQ(row.points, 0);
    EXPECT_EQ(row.gamesPlayed, 0);
  }
}
