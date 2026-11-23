#pragma once

#include <span>
#include <vector>

#include "core/team.hpp"
#include "core/types.hpp"
#include "league/schedule.hpp"
#include "league/table.hpp"
#include "score/score_model.hpp"

namespace football {

// plays all games once. Returns the final table first place first
[[nodiscard]] std::vector<TableRow> playSeason(std::span<const Team> teams,
                                               const Schedule &schedule,
                                               const ScoreModel &model,
                                               RandomGenerator &random);

} // namespace football
