# 56. Merge Intervals

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Intervals | Array, Sorting, Quicksort |

[Problem on LeetCode](https://leetcode.com/problems/merge-intervals/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 7 ms (beats 40.7%), memory 23.8 MB (beats 82.0%)

## Why it works
After **sorting by start**, any intervals that overlap are adjacent. Starting from interval `i`, the inner `while` keeps absorbing the next interval as long as it starts before the current `end`, extending `end` when needed. The merged `[start, end]` is then emitted, and the outer loop continues after the absorbed ones.

## Complexity
- **Time:** `O(n log n)` for sorting, then `O(n)` for merging.
- **Space:** `O(n)` for the output (plus the sort's stack).

## How it could be improved
- A simpler, standard pattern is: for each interval, if it overlaps `res.back()`, set `res.back()[1] = max(res.back()[1], end)`, otherwise `push_back`. No inner loop and no temporary `curr` vector.
- The outer `start`/`end` declared before the loop are shadowed and unused.
- Sort with a comparator on `a[0]` only to avoid comparing second elements.
