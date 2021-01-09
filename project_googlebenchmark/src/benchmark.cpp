#include "lib/fibonacci.h"
#include <benchmark/benchmark.h>

static void BM_Fibonacci_40(benchmark::State& state)
{
    // Perform setup here
    for (auto _ : state)
    {
        // This code gets timed
        Fibonacci(40);
    }
}
// Register the function as a benchmark
BENCHMARK(BM_Fibonacci_40);


static void BM_Fibonacci_Param(benchmark::State& state)
{
    for (auto _ : state)
    {
        Fibonacci(state.range(0));
    }
}

BENCHMARK(BM_Fibonacci_Param)->Arg(1)->Arg(5)->Arg(10)->Arg(20)->Arg(40);

// Run the benchmark
BENCHMARK_MAIN();
