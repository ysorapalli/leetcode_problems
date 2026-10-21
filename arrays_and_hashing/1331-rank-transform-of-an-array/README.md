# 1331. Rank Transform of an Array

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Arrays & Hashing | Array, Hash Table, Sorting |

[Problem on LeetCode](https://leetcode.com/problems/rank-transform-of-an-array/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 85 ms (beats 9.1%), memory 44.2 MB (beats 43.9%)

## Why it works
It sorts a copy of the array and walks it, incrementing `rank` only when the value increases, so equal values share a rank. It then maps each original value to its rank.

## Complexity
- **Time:** `O(n log n)`.
- **Space:** `O(n)`.

## How it could be improved
- `std::map` adds a second `O(n log n)` with heavy node allocations, which is why runtime beats only 9%. Options:
  - Use `unordered_map`, or
  - Deduplicate the sorted copy (`sort + unique + erase`), then rank each value via `lower_bound(...) - begin + 1`. That needs no map at all.
