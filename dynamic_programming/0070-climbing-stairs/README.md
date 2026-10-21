# 70. Climbing Stairs

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Dynamic Programming | Math, Dynamic Programming, Memoization |

[Problem on LeetCode](https://leetcode.com/problems/climbing-stairs/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 7.9 MB (beats 71.1%)

## Why it works
To reach step `i`, the last move was either 1 step (from `i-1`) or 2 steps (from `i-2`). So `ways(i) = ways(i-1) + ways(i-2)`, the Fibonacci recurrence. Only the last two values are needed, so two variables roll forward.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(1)`.

## How it could be improved
- Already the expected optimal solution. For very large `n`, **matrix exponentiation** or the closed-form Binet formula give `O(log n)`, which is overkill here (`n ≤ 45`).
