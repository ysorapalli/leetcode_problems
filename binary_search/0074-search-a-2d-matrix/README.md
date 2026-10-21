# 74. Search a 2D Matrix

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Binary Search | Array, Binary Search, Matrix |

[Problem on LeetCode](https://leetcode.com/problems/search-a-2d-matrix/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 2 ms (beats 1.3%), memory 13.2 MB (beats 77.3%)

## Why it works
Each row is sorted, and each row's first element is greater than the previous row's last. So the matrix reads as **one sorted array of length `m · n`**. Binary search over that virtual array maps an index `k` to the cell `(k / n, k % n)`.

## Complexity
- **Time:** `O(log(m · n))`.
- **Space:** `O(1)`.

## How it could be improved
- The 1-based `mid` and the recomputed `(i*n + j + 1) ± 1` are equivalent to `left = mid + 1` / `right = mid - 1`. Using a 0-based range `[0, m*n - 1]` makes it a textbook binary search.
- Use `mid = left + (right - left) / 2` to avoid overflow habits.
- The low runtime percentile is just timing noise; the algorithm is already optimal.
