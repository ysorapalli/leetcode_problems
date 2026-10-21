# 4. Median of Two Sorted Arrays

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Hard | Binary Search | Array, Binary Search, Divide and Conquer |

[Problem on LeetCode](https://leetcode.com/problems/median-of-two-sorted-arrays/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 2 ms (beats 32.6%), memory 95.8 MB (beats 23.2%)

## Why it works
It appends `nums2` to `nums1`, sorts the combined array, and reads the middle element (odd length) or averages the two middle elements (even length). Sorting guarantees the middle position holds the median.

## Complexity
- **Time:** `O((m + n) log(m + n))` for the sort.
- **Space:** `O(n)` extra for growing `nums1` (plus the sort's stack).

## How it could be improved
- It ignores that both inputs are **already sorted**. A two-pointer merge that walks to the middle gives `O(m + n)` time and `O(1)` space.
- The intended solution is a **binary search on the partition** of the shorter array. Choose `i` elements from A and `(m+n+1)/2 - i` from B so that every left-side element ≤ every right-side element. That runs in `O(log(min(m, n)))`.
- Unused variables (`left`, `right`, `m`) can be removed.
