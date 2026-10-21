# 543. Diameter of Binary Tree

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Trees | Tree, Depth-First Search, Binary Tree, DP on Trees |

[Problem on LeetCode](https://leetcode.com/problems/diameter-of-binary-tree/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 15 ms (beats 18.2%), memory 31.9 MB (beats 5.3%)

## Why it works
The longest path through any node is (deepest left branch) + (deepest right branch). The DFS returns each node's height and records `l + r` for every node in a map. The diameter is the maximum of those values.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(n)` for the map, plus `O(h)` recursion.

## How it could be improved
- No map is needed: keep a single `int best` and update `best = max(best, l + r)` **during** the DFS. That drops `O(n)` memory and all the hashing, which explains the low runtime and memory percentiles.
- The `if (curr->left)` checks are redundant, since `calc(nullptr)` already returns 0.
