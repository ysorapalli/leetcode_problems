# 542. 01 Matrix

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Graphs | Array, Dynamic Programming, Breadth-First Search, Matrix |

[Problem on LeetCode](https://leetcode.com/problems/01-matrix/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 15 ms (beats 71.5%), memory 36.7 MB (beats 47.2%)

## Why it works
**Multi-source BFS.** All `0` cells start in the queue at distance 0. BFS expands outward in rings, so the first time a cell is reached is via the nearest zero, and its distance is final (`res == -1` marks unvisited).

## Complexity
- **Time:** `O(m · n)`.
- **Space:** `O(m · n)` for the queue and result.

## How it could be improved
- The `visited` matrix is allocated but never used, since `res == -1` already serves that purpose. Removing it saves `O(m · n)` memory.
- **Two-pass DP alternative:** sweep top-left to bottom-right taking `min(up, left) + 1`, then bottom-right to top-left with `min(down, right) + 1`. It needs no queue.
