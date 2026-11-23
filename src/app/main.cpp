#include <filesystem>
#include <iostream>

#include "input/team_loader.hpp"
#include "league/schedule.hpp"
#include "score/score_model.hpp"
#include "simulation/many_seasons.hpp"

int main(int argc, char *argv[]) {
  const std::filesystem::path path = argc > 1 ? argv[1] : "data/teams.csv";

  const auto teams = football::loadTeams(path);
  if (!teams) {
    std::cerr << "Error: " << teams.error() << '\n';
    return 1;
  }

  const auto schedule = football::makeSchedule(teams->size());
  const football::ScoreModel model;

  const auto stats =
      football::playManySeasons(*teams, schedule, model, 100'000, 42);

  // TODO(C): print the results
  std::cout << "Simulated " << stats.seasons() << " seasons\n";
  return 0;
}
