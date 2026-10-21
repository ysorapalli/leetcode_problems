# 2358. Maximum Number of Groups Entering a Competition

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Greedy | Array, Math, Binary Search, Greedy |

[Problem on LeetCode](https://leetcode.com/problems/maximum-number-of-groups-entering-a-competition/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 27 ms (beats 11.5%), memory 60.3 MB (beats 56.8%)

## Why it works
After sorting, putting 1 student in group 1, the next 2 in group 2, the next 3 in group 3, and so on, satisfies both rules: sums increase because later groups contain larger grades *and* more students. So the answer is the largest `k` with `1 + 2 + … + k ≤ n`, which the loop finds by stepping `i` forward by `x` each group.

## Complexity
- **Time:** `O(n log n)` for the sort, then `O(√n)` for the loop.
- **Space:** `O(log n)` for the sort.

## How it could be improved
- **The grades don't matter at all**, only `n` does. Skip the sort and solve `k(k+1)/2 ≤ n` directly: `k = floor((sqrt(8n + 1) - 1) / 2)`. That's `O(1)` (or `O(√n)` with a simple loop).
