# 1137. N-th Tribonacci Number

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Dynamic Programming | Math, Dynamic Programming, Memoization |

[Problem on LeetCode](https://leetcode.com/problems/n-th-tribonacci-number/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 8 MB (beats 46.6%)

## Why it works
It's the recurrence `T(n) = T(n-1) + T(n-2) + T(n-3)`, built bottom-up into an array. The constraint `n ≤ 37` guarantees the fixed array of 38 is big enough.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(1)`, a fixed array of 38 ints.

## How it could be improved
- Three rolling variables (`a, b, c`) remove the hard-coded array size.
- Matrix exponentiation gives `O(log n)`, but that's overkill for `n ≤ 37`.
