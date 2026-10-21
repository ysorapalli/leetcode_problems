# 2696. Minimum String Length After Removing Substrings

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Stack & Queue | String, Stack, Simulation |

[Problem on LeetCode](https://leetcode.com/problems/minimum-string-length-after-removing-substrings/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 11.6 MB (beats 56.7%)

## Why it works
Removing `"AB"` or `"CD"` can create new adjacent pairs, like brackets collapsing. A **stack** handles that cascade: if the new char completes a pair with the top, pop it, otherwise push. What remains can't be reduced further, and its size is the answer.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(n)`.

## How it could be improved
- Already optimal. A `string` used as the stack (`back` / `pop_back`) is a bit lighter. An in-place write pointer over `s` gives `O(1)` extra space.
