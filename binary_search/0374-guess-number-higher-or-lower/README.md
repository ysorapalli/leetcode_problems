# 374. Guess Number Higher or Lower

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Binary Search | Binary Search, Interactive |

[Problem on LeetCode](https://leetcode.com/problems/guess-number-higher-or-lower/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 7.9 MB (beats 42.5%)

## Why it works
It's standard binary search on `[1, n]`, using the API's answer to discard half the range each step. `mid = left + (right - left) / 2` avoids integer overflow when `n` is near `INT_MAX`.

## Complexity
- **Time:** `O(log n)` API calls.
- **Space:** `O(1)`.

## How it could be improved
- Already optimal.
