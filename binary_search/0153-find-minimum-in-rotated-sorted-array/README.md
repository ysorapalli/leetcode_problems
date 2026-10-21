# 153. Find Minimum in Rotated Sorted Array

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Binary Search | Array, Binary Search |

[Problem on LeetCode](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 14.2 MB (beats 10.8%)

## Why it works
The minimum is the **rotation point**. Binary search keeps the half that must contain it, while `minNum` records every `nums[mid]` seen, so the answer can't be skipped even if a boundary update overshoots it.

## Complexity
- **Time:** `O(log n)`.
- **Space:** `O(1)`.

## How it could be improved
- There's a much simpler invariant: compare only `nums[mid]` with `nums[right]`. If `nums[mid] > nums[right]`, the minimum is to the right (`left = mid + 1`), otherwise it's at `mid` or to the left (`right = mid`). Loop while `left < right` and return `nums[left]`, with no `minNum` tracking needed.
