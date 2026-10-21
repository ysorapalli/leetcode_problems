# 81. Search in Rotated Sorted Array II

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Binary Search | Array, Binary Search |

[Problem on LeetCode](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 18.1 MB (beats 7.8%)

## Why it works
It uses the same idea as rotated-array search: one half around `mid` is sorted, so check whether the target lies in that half. **Duplicates** add one ambiguous case: when `nums[left] == nums[mid] == nums[right]`, you can't tell which half is sorted. The code then safely shrinks both ends by one, since neither endpoint can be the target (`nums[mid]` already isn't).

## Complexity
- **Time:** `O(log n)` on average, `O(n)` worst case (e.g. all duplicates).
- **Space:** `O(1)`.

## How it could be improved
- The `O(n)` worst case is unavoidable with duplicates; this is the expected solution.
- Use `mid = left + (right - left) / 2` for overflow-safe style.
