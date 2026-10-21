# 2379. Minimum Recolors to Get K Consecutive Black Blocks

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Sliding Window | String, Sliding Window |

[Problem on LeetCode](https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 8.4 MB (beats 60.0%)

## Why it works
A **fixed-size sliding window** of length `k` counts the black blocks inside it. Recolors needed for a window = `k - blacks`. Sliding adds the new right block and removes the old left block in `O(1)`, so the code tracks the max blacks over all windows and returns `k - maxBlack`.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(1)`.

## How it could be improved
- Already optimal. The early `return 0` checks are a nice touch; tracking `minWhites` directly reads a bit more naturally.
