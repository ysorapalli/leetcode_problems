# 101. Symmetric Tree

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Trees | Tree, Depth-First Search, Breadth-First Search, Binary Tree |

[Problem on LeetCode](https://leetcode.com/problems/symmetric-tree/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 18.5 MB (beats 72.0%)

## Why it works
A tree is symmetric if its left and right subtrees are **mirrors**. Two trees are mirrors when their roots match, the left's left mirrors the right's right, and the left's right mirrors the right's left. The helper checks exactly that.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(h)` recursion stack.

## How it could be improved
- `mirror(root, root)` compares every pair **twice** (once from each side). Calling `mirror(root->left, root->right)` halves the work.
- An iterative BFS with a queue of node pairs avoids recursion depth issues.
