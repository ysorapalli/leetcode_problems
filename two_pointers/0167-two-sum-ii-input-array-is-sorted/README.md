# 167. Two Sum II - Input Array Is Sorted

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Two Pointers | Array, Two Pointers, Binary Search |

[Problem on LeetCode](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 19.5 MB (beats 75.3%)

## Why it works
The array is sorted, so with `left` at the smallest and `right` at the largest: if the sum is too small, only increasing `left` can help; if it's too big, only decreasing `right` can. Each move safely discards one element, so the pair is found in one sweep.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(1)`.

## How it could be improved
- Already optimal. (A binary search for each element's complement would be `O(n log n)`, which is slower.)
