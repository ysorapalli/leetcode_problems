# 200. Number of Islands

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Graphs | Array, Depth-First Search, Breadth-First Search, Union-Find, Matrix |

[Problem on LeetCode](https://leetcode.com/problems/number-of-islands/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 29 ms (beats 39.1%), memory 16.3 MB (beats 76.7%)

## Why it works
Scan every cell. Each time an unvisited `'1'` is found, that's a new island: count it and **flood-fill** it with DFS, turning all connected land to `'0'` so it's never counted again.

## Complexity
- **Time:** `O(m · n)`, each cell processed a constant number of times.
- **Space:** `O(m · n)` recursion depth in the worst case (one big snake-shaped island).

## How it could be improved
- It mutates the input grid. Fine on LeetCode, but restore it or use a `visited` array if the caller needs the grid.
- **BFS** (the commented-out version) avoids stack overflow on huge grids.
- **Union-Find** is the go-to if islands are added dynamically (see Number of Islands II).
