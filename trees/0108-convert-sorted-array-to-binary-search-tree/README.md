# 108. Convert Sorted Array to Binary Search Tree

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Trees | Array, Divide and Conquer, Tree, Binary Search Tree, Binary Tree |

[Problem on LeetCode](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 3 ms (beats 62.3%), memory 22.9 MB (beats 55.1%)

## Why it works
Choosing the **middle element** of a sorted range as the root puts equal numbers of elements on each side, which keeps the tree height-balanced. Recursing on the left half and right half builds valid BSTs (all left values < root < all right values) that are also balanced.

## Complexity
- **Time:** `O(n)`, each element becomes one node.
- **Space:** `O(log n)` recursion depth (plus `O(n)` for the tree itself).

## How it could be improved
- Already optimal; nothing meaningful to improve.
