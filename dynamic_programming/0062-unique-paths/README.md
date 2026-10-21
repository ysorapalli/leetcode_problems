# 62. Unique Paths

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Dynamic Programming | Math, Dynamic Programming, Combinatorics |

[Problem on LeetCode](https://leetcode.com/problems/unique-paths/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 9.1 MB (beats 68.9%)

## Why it works
**Dynamic programming on a grid.** The robot reaches cell `(x, y)` only from above or from the left. So `ways(x, y) = ways(x-1, y) + ways(x, y-1)`, with one way to be at the start. Filling the table row by row guarantees both dependencies are computed first.

## Complexity
- **Time:** `O(m · n)`.
- **Space:** `O(m · n)`.

## How it could be improved
- Only the previous row is needed, so a **1-D array** gives `dp[y] += dp[y-1]` and `O(n)` space.
- **Combinatorics:** every path is `m-1` downs and `n-1` rights in some order, so the answer is `C(m+n-2, m-1)`. That's `O(min(m, n))` time and `O(1)` space (multiply and divide incrementally in `long long`).
