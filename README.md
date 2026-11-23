# Ekstraklasa Sim

A C++ project that simulates full season of the Polish (we could still pick something else if you feel like it) football league (Ekstraklasa) many times with random results.

Each team has a strength rating. Stronger teams win more often, but not always. After many simulated seasons the program shows how likely each team is to finish in each place in the table and how likely it is to drop out of the league.

## Build

```bash
cmake -S . -B build
cmake --build build
```

## Run

```bash
./build/simulator
```

## Test

```bash
ctest --test-dir build --output-on-failure
```

## Team

There are three of us and each person owns one part. Pick A or B and put your name in the table.

| Person    | Part                                                                      | Folders                                  |
| --------- | ------------------------------------------------------------------------- | ---------------------------------------- |
| A: <name> | Read teams, build the schedule, league table                              | `src/input`, `src/league`                |
| B: <name> | Decide game scores from team strength, real team data in `data/teams.csv` | `src/score`, `data`                      |
| wiki      | Play seasons, count results, print output, CI                             | `src/simulation`, `src/stats`, `src/app` |

Everyone writes tests for their own part in `tests/`.

Search the code for `TODO(A)`, `TODO(B)` or `TODO(wiki)` to find your tasks.

## Workflow

You can't push to `main` directly. Every change goes through a pull request:

1. Make a branch from `main`:
   ```bash
   git checkout main && git pull
   git checkout -b feat/your-task
   ```
2. Commit and push your work:
   ```bash
   git push -u origin feat/your-task
   ```
3. Open a pull request on GitHub.
4. Wait for the tests to pass (green tick). A PR with failing tests can't be merged.
5. Merge with **Squash and merge** (this is the only option I enabled either way)
