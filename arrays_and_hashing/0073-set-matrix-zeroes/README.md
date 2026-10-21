# 73. Set Matrix Zeroes

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Arrays & Hashing | Array, Hash Table, Matrix |

[Problem on LeetCode](https://leetcode.com/problems/set-matrix-zeroes/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 3 ms (beats 24.2%), memory 18.7 MB (beats 100.0%)

## Why it works
The first pass records the row and column of every zero. The second pass zeroes any cell whose row or column was recorded. Recording first and modifying later prevents newly written zeros from cascading.

## Complexity
- **Time:** `O(m · n · z)` in the worst case, where `z` is the number of zeros. `find` scans the whole `rows`/`cols` vectors for *every* cell, and those vectors can hold up to `m · n` entries.
- **Space:** `O(z)`.

## How it could be improved
- Use two **boolean arrays** `zeroRow[m]` and `zeroCol[n]`. The lookup becomes `O(1)`, giving `O(m · n)` time and `O(m + n)` space.
- The follow-up `O(1)`-space trick: use the **first row and first column as the markers**, with one extra flag recording whether column 0 itself needs zeroing.
