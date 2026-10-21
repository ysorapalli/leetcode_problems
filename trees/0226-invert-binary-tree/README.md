# 226. Invert Binary Tree

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Trees | Tree, Depth-First Search, Breadth-First Search, Binary Tree |

[Problem on LeetCode](https://leetcode.com/problems/invert-binary-tree/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 12.6 MB (beats 24.7%)

## Why it works
Inverting means every node's left and right children are swapped. A preorder traversal swaps at each node and then recurses, so every node gets swapped exactly once.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(h)` recursion stack.

## How it could be improved
- Already optimal. `std::swap(root->left, root->right);` replaces the manual temp swap, and `invertTree` can recurse on itself, with no helper needed.
