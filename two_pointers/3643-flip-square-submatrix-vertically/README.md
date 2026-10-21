# 3643. Flip Square Submatrix Vertically

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Two Pointers | Array, Two Pointers, Matrix |

[Problem on LeetCode](https://leetcode.com/problems/flip-square-submatrix-vertically/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 34 MB (beats 4.4%)

## Why it works
Flipping a `k × k` block vertically means swapping its top and bottom rows (restricted to columns `y..y+k-1`), moving inward until the pointers meet. It's the **two-pointer reversal** applied to rows.

## Complexity
- **Time:** `O(k²)`.
- **Space:** `O(1)`.

## How it could be improved
- Already optimal. `swap_ranges(grid[top].begin() + y, grid[top].begin() + y + k, grid[bottom].begin() + y)` expresses the inner loop in one call, and the unused `rows` and `cols` can be removed.
