# 53. Maximum Subarray

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Dynamic Programming | Array, Divide and Conquer, Dynamic Programming |

[Problem on LeetCode](https://leetcode.com/problems/maximum-subarray/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 71.8 MB (beats 14.8%)

## Why it works
**Kadane's algorithm.** `currSum` is the best sum of a subarray *ending at* `i`. Either extend the previous subarray or start fresh at `nums[i]`, whichever is larger: if the running sum went negative, it only hurts. `maxSum` tracks the best of all these endings.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(1)`.

## How it could be improved
- Already optimal. The stray `#include <climits>` inside the class is unnecessary and should go at the top of the file (or be removed).
- The follow-up asks for **divide and conquer**: `O(n log n)`, useful as practice but slower.
