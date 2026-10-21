# 78. Subsets

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Backtracking | Array, Backtracking, Bit Manipulation |

[Problem on LeetCode](https://leetcode.com/problems/subsets/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 9.9 MB (beats 59.8%)

## Why it works
**Backtracking where every node of the recursion tree is a subset.** `path` is recorded on entry, then each later element `i ≥ index` is tried as the next inclusion. Only moving forward means each subset is generated exactly once, in index order.

## Complexity
- **Time:** `O(n · 2^n)`: `2^n` subsets, each copied in `O(n)`.
- **Space:** `O(n)` recursion depth (excluding output).

## How it could be improved
- Already optimal for generating all subsets.
- **Bitmask alternative:** loop `mask` from 0 to `2^n - 1` and include `nums[j]` when bit `j` is set. It's iterative, with no recursion.
