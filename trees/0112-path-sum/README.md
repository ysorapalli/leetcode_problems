# 112. Path Sum

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Trees | Tree, Depth-First Search, Breadth-First Search, Binary Tree |

[Problem on LeetCode](https://leetcode.com/problems/path-sum/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 21.5 MB (beats 33.1%)

## Why it works
Subtract each node's value from the target on the way down. At a **leaf**, the path is valid exactly when the remaining target equals the leaf's value. `||` returns as soon as any root-to-leaf path works.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(h)` recursion stack.

## How it could be improved
- Already optimal. `hasPathSum` can recurse on itself directly, with no helper needed.
