# 118. Pascal's Triangle

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Dynamic Programming | Array, Dynamic Programming |

[Problem on LeetCode](https://leetcode.com/problems/pascals-triangle/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 9.7 MB (beats 61.2%)

## Why it works
Each row starts and ends with 1, and every inner entry is the **sum of the two entries above it** (`prev[j-1] + prev[j]`). Building row by row from the previous row generates the triangle.

## Complexity
- **Time:** `O(numRows²)`, the size of the output.
- **Space:** `O(numRows²)` for the output (`O(numRows)` extra).

## How it could be improved
- `vector<int> prev = res[i-2];` **copies** the previous row every iteration. Use `const vector<int>& prev = res.back();`.
- A uniform loop removes the special cases for rows 1 and 2: create `row(i + 1, 1)`, then fill `row[j] = res[i-1][j-1] + res[i-1][j]` for the inner positions.
