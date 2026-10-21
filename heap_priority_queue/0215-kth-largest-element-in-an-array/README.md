# 215. Kth Largest Element in an Array

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Heap / Priority Queue | Array, Divide and Conquer, Sorting, Heap (Priority Queue), Quickselect |

[Problem on LeetCode](https://leetcode.com/problems/kth-largest-element-in-an-array/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 35 ms (beats 59.6%), memory 61.5 MB (beats 100.0%)

## Why it works
It keeps a **min-heap of the k largest elements seen so far**. When the heap grows beyond `k`, it pops the smallest. After all elements, the heap holds exactly the k largest, and its top (the smallest of them) is the k-th largest overall.

## Complexity
- **Time:** `O(n log k)`.
- **Space:** `O(k)`.

## How it could be improved
- **Quickselect** (or `std::nth_element`) partitions around a pivot and recurses into one side only: `O(n)` average time and `O(1)` space. Use a random pivot to avoid the worst case.
- Values are bounded (`-10⁴..10⁴`), so **counting sort** with a 20,001-slot array gives guaranteed `O(n + range)`.
