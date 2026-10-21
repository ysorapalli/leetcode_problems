# 684. Redundant Connection

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Graphs | Depth-First Search, Breadth-First Search, Union-Find, Graph Theory |

[Problem on LeetCode](https://leetcode.com/problems/redundant-connection/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 13 MB (beats 86.3%)

## Why it works
**Union-Find.** Process edges in order. If both endpoints already share a root, they're already connected, so this edge closes a cycle. That makes it the redundant edge, and since it's the last such edge in input order, it's the one the problem wants. Otherwise, union the two sets. Path compression in `findParent` keeps the trees shallow.

## Complexity
- **Time:** `O(n · α(n))`, effectively linear.
- **Space:** `O(n)`.

## How it could be improved
- Add **union by rank or size** to guarantee near-constant operations.
- `for (vector<int> edge : edges)` copies each edge; use `const auto&`.
- `checkCycle` returns `true` when there is **no** cycle. Renaming it to `unite` (returning whether a merge happened) makes the logic read correctly.
