# 1464. Maximum Product of Two Elements in an Array

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Arrays & Hashing | Array, Sorting, Heap (Priority Queue) |

[Problem on LeetCode](https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 13.4 MB (beats 93.9%)

## Why it works
`(a-1)(b-1)` grows with both factors and all values are ≥ 1, so the answer comes from the **two largest** values. Sorting puts them at the end.

## Complexity
- **Time:** `O(n log n)`.
- **Space:** `O(1)` to `O(log n)` for the sort.

## How it could be improved
- Track the top two in a single pass (`if (x > first) { second = first; first = x; } else if (x > second) second = x;`). That's `O(n)` time, `O(1)` space, and leaves the input unmodified.
