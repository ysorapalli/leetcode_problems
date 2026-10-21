# 42. Trapping Rain Water

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Hard | Two Pointers | Array, Two Pointers, Dynamic Programming, Stack, Monotonic Stack |

[Problem on LeetCode](https://leetcode.com/problems/trapping-rain-water/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 4 ms (beats 8.4%), memory 26.1 MB (beats 54.6%)

## Why it works
Water above bar `i` equals `min(maxLeft, maxRight) - height[i]`. With **two pointers** we always move the side with the smaller running max. That side's water level is fully determined by its own max, because the other side is guaranteed to have a taller wall. So it can be finalized immediately.

## Complexity
- **Time:** `O(n)`, a single pass.
- **Space:** `O(1)`.

## How it could be improved
- Already optimal. Minor: initialize `lmax = rmax = 0` (heights are non-negative), and the ternary can be split into an `if/else` for readability.
- Alternatives worth knowing are prefix/suffix max arrays (`O(n)` space) or a monotonic stack. Both are the same time but use more memory.
