# 1337. The K Weakest Rows in a Matrix

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Binary Search | Array, Binary Search, Sorting, Heap (Priority Queue), Matrix |

[Problem on LeetCode](https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 14.4 MB (beats 69.1%)

## Why it works
Soldiers come first in each row, so a binary search finds the last `1` and gives the soldier count in `O(log n)`. Sorting the `(soldiers, rowIndex)` pairs orders rows by strength, with ties broken by index automatically. The first `k` indices are the answer.

## Complexity
- **Time:** `O(m log n + m log m)`.
- **Space:** `O(m)`.

## How it could be improved
- Only `k` rows are needed: `partial_sort` or a size-`k` max-heap gives `O(m log k)` for that step.
- A **column-wise scan** collects rows in order as soon as a 0 appears, which is neat for small matrices.
