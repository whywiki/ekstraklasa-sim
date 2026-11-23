#pragma once

#include <cstddef>
#include <cstdint>
#include <span>

#include "core/team.hpp"
#include "league/schedule.hpp"
#include "score/score_model.hpp"
#include "stats/position_stats.hpp"

namespace football {

// plays many seasons and counts where each team finished.
// The same seed always gives the same result
[[nodiscard]] PositionStats playManySeasons(std::span<const Team> teams,
                                            const Schedule &schedule,
                                            const ScoreModel &model,
                                            std::size_t seasons,
                                            std::uint64_t seed);

} // namespace football
