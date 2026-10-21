# 104. Maximum Depth of Binary Tree

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Trees | Tree, Depth-First Search, Breadth-First Search, Binary Tree |

[Problem on LeetCode](https://leetcode.com/problems/maximum-depth-of-binary-tree/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 18.9 MB (beats 99.9%)

## Why it works
Each call passes down the depth so far (`maxVal + 1` for children). When recursion hits a null node, the depth of that path is returned, and each node returns the larger of its two subtrees' depths. So the root returns the longest root-to-leaf path.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(h)` recursion stack.

## How it could be improved
- The bottom-up form needs no extra parameter: `return root ? 1 + max(maxDepth(root->left), maxDepth(root->right)) : 0;`.
- BFS that counts levels avoids deep recursion on skewed trees.
