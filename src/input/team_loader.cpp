#include "input/team_loader.hpp"

namespace football {

std::expected<std::vector<Team>, std::string>
loadTeams([[maybe_unused]] const std::filesystem::path &path) {
  // TODO(A): read the CSV file
  return std::unexpected("loadTeams is not implemented yet");
}

} // namespace football
