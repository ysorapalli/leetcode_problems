# 349. Intersection of Two Arrays

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Arrays & Hashing | Array, Hash Table, Two Pointers, Binary Search, Sorting |

[Problem on LeetCode](https://leetcode.com/problems/intersection-of-two-arrays/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 14.7 MB (beats 14.6%)

## Why it works
It builds a set from each array, which removes duplicates. It then iterates the smaller set and keeps elements also present in the larger one. The result is unique by construction.

## Complexity
- **Time:** `O((m + n) log(m + n))` with ordered `std::set`.
- **Space:** `O(m + n)`.

## How it could be improved
- `unordered_set` gives `O(m + n)` average time.
- Values are in `[0, 1000]`, so a `bool seen[1001]` array is fastest: mark `nums1`, then for each `nums2` value that's marked, output it and unmark it.
- Unused `s1` and `s2` can be removed.
