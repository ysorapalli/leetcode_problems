# 994. Rotting Oranges

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Graphs | Array, Breadth-First Search, Matrix |

[Problem on LeetCode](https://leetcode.com/problems/rotting-oranges/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 17 MB (beats 37.9%)

## Why it works
**Multi-source BFS** from all rotten oranges at once. Each BFS level is one minute, and every fresh orange reached in that level becomes rotten. Fresh oranges are counted up front. If any remain when the BFS stops, they're unreachable and the answer is `-1`.

## Complexity
- **Time:** `O(m · n)`.
- **Space:** `O(m · n)`.

## How it could be improved
- `visited` is redundant: setting `grid[nx][ny] = 2` already prevents revisiting. Dropping it saves `O(m · n)` memory.
- Otherwise this is the optimal, standard solution.
