# 236. Lowest Common Ancestor of a Binary Tree

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Trees | Tree, Depth-First Search, Binary Tree, Binary Lifting, Lowest Common Ancestor |

[Problem on LeetCode](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 8 ms (beats 100.0%), memory 17.6 MB (beats 100.0%)

## Why it works
Each call returns `p` or `q` if found in that subtree, otherwise null. If the left and right subtrees **both** report a hit, then `p` and `q` are on different sides, so the current node is their lowest common ancestor. If only one side reports a hit, pass it up. If the current node *is* `p` or `q`, return it immediately: it's the LCA even if the other node lies below it.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(h)` recursion stack.

## How it could be improved
- Already optimal. The commented-out parent-map approach also works but uses `O(n)` extra space and is slower.
