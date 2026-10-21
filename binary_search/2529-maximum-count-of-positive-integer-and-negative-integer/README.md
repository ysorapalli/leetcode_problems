# 2529. Maximum Count of Positive Integer and Negative Integer

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Binary Search | Array, Binary Search, Counting |

[Problem on LeetCode](https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 21.5 MB (beats 23.7%)

## Why it works
The array is sorted, so negatives form a prefix and positives a suffix. One binary search finds the first index `≥ 0` (which equals the negative count), and another finds the first index `> 0` (positives = `n` − that index). The answer is the larger count.

## Complexity
- **Time:** `O(log n)`.
- **Space:** `O(1)`.

## How it could be improved
- Already optimal (this is the follow-up). The standard library does the same in two lines: `lower_bound(..., 0)` and `upper_bound(..., 0)`.
