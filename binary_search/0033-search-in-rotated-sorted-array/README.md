# 33. Search in Rotated Sorted Array

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Binary Search | Array, Binary Search |

[Problem on LeetCode](https://leetcode.com/problems/search-in-rotated-sorted-array/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 15.2 MB (beats 36.7%)

## Why it works
In a rotated sorted array, **at least one half around `mid` is always sorted**. If the left half `[left, mid]` is sorted and the target lies within its range, search left, otherwise search right. The mirror logic applies when the right half is sorted. Each step discards half the array, just like normal binary search.

## Complexity
- **Time:** `O(log n)`.
- **Space:** `O(1)`.

## How it could be improved
- The second condition `else if (nums[right] >= nums[mid])` is always true when the first fails (if the left half isn't sorted, the right half must be). It can be a plain `else`.
- Already optimal asymptotically.
