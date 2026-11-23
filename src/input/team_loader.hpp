#pragma once

#include <expected>
#include <filesystem>
#include <string>
#include <vector>

#include "core/team.hpp"

namespace football {

// reads teams from CSV file. Returns an error msg on failure
[[nodiscard]] std::expected<std::vector<Team>, std::string>
loadTeams(const std::filesystem::path &path);

} // namespace football
