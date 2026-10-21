# 3477. Fruits Into Baskets II

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Arrays & Hashing | Array, Binary Search, Segment Tree, Simulation, Ordered Set |

[Problem on LeetCode](https://leetcode.com/problems/fruits-into-baskets-ii/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 5 ms (beats 21.3%), memory 48.9 MB (beats 74.1%)

## Why it works
It simulates the rule directly. Each fruit takes the **leftmost free basket** with enough capacity, tracked by `free[]`. Fruits that find no basket are counted.

## Complexity
- **Time:** `O(n²)`.
- **Space:** `O(n)`.

## How it could be improved
- Fine for `n ≤ 100`. For large `n` (version III), build a **segment tree over basket capacities** storing the range max. Descend left-first to find the leftmost basket with capacity ≥ the fruit, then set it to 0. That's `O(n log n)`.
