# 94. Binary Tree Inorder Traversal

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Trees | Stack, Tree, Depth-First Search, Binary Tree |

[Problem on LeetCode](https://leetcode.com/problems/binary-tree-inorder-traversal/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 10.8 MB (beats 66.9%)

## Why it works
**Inorder = left, node, right.** The recursive helper visits the left subtree, records the node, then visits the right subtree, which yields the values in inorder sequence.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(h)` recursion stack (`O(n)` for a skewed tree).

## How it could be improved
- The follow-up asks for iterative: the commented-out explicit-stack version is correct, keep it as an alternative.
- **Morris traversal** temporarily threads each predecessor's right pointer back to the node, giving `O(1)` extra space.
