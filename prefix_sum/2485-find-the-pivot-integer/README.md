# 2485. Find the Pivot Integer

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Prefix Sum | Math, Prefix Sum |

[Problem on LeetCode](https://leetcode.com/problems/find-the-pivot-integer/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 10.6 MB (beats 8.8%)

## Why it works
The pivot `x` satisfies `sum(1..x) = sum(x..n)`, which rearranges to `sum(n) + x = 2 · sum(x)`. The code precomputes prefix sums up to 1000 and checks that equation for each `x`.

## Complexity
- **Time:** `O(n)`, plus a fixed 1000-step precomputation.
- **Space:** `O(1)`, a fixed array of 1001.

## How it could be improved
- **Closed form, `O(1)`:** `x(x+1)/2 = (n(n+1)/2) - (x(x-1)/2) + x` simplifies to `x² = n(n+1)/2`. So compute `total = n(n+1)/2` and `x = sqrt(total)`, returning `x` if `x * x == total` and `-1` otherwise.
