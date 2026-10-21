# 111. Minimum Depth of Binary Tree

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Trees | Tree, Depth-First Search, Breadth-First Search, Binary Tree |

[Problem on LeetCode](https://leetcode.com/problems/minimum-depth-of-binary-tree/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 146.9 MB (beats 50.0%)

## Why it works
**BFS processes the tree level by level**, so the first leaf it meets is guaranteed to be the shallowest one. The code returns the current level count immediately at that point, without exploring deeper levels.

## Complexity
- **Time:** `O(n)` worst case, often much less thanks to the early exit.
- **Space:** `O(w)`, where `w` is the maximum width of the tree.

## How it could be improved
- This is already the best approach for minimum depth: DFS would have to explore the whole tree.
- The final `return dep;` is unreachable (a non-empty tree always has a leaf).
- Checking for a leaf before pushing children avoids enqueuing nodes you won't need.
