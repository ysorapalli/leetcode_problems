# 88. Merge Sorted Array

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Two Pointers | Array, Two Pointers, Sorting |

[Problem on LeetCode](https://leetcode.com/problems/merge-sorted-array/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 12.2 MB (beats 99.0%)

## Why it works
It runs a standard **two-pointer merge** of the two sorted prefixes into a new vector, copies the leftovers, then assigns the result back to `nums1`.

## Complexity
- **Time:** `O(m + n)`.
- **Space:** `O(m + n)` for `res`.

## How it could be improved
- The problem leaves exactly `n` spare slots at the end of `nums1`, so **merge from the back**: compare `nums1[i]` and `nums2[j]` from their ends and write the larger to `nums1[k--]`. That is `O(1)` extra space with no copy. Leftover `nums1` items are already in place, so only `nums2`'s leftovers need copying.
- `else if (nums2[i2] < nums1[i1])` can be a plain `else`.
