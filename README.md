# Ekstraklasa Sim

A C++ project that simulates full season of the Polish (maybe something else, we need to discuss it) football league (Ekstraklasa) many times with random results.

Each team has a strength rating. Stronger teams win more often, but not always. After many simulated seasons the program shows how likely each team is to finish in each place in the table and how likely it is to drop out of the league (I think).

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
