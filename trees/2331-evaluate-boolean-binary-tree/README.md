# 2331. Evaluate Boolean Binary Tree

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Trees | Tree, Depth-First Search, Binary Tree |

[Problem on LeetCode](https://leetcode.com/problems/evaluate-boolean-binary-tree/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 24.2 MB (beats 83.6%)

## Why it works
A leaf returns its boolean value. An internal node evaluates both children recursively, then applies OR (`2`) or AND (`3`). This is a post-order traversal, so each node's operands are computed before the operator is applied.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(h)` recursion stack.

## How it could be improved
- Short-circuit: for OR, if the left child is true, skip evaluating the right one (and likewise false for AND). `return op == 2 ? (evaluateTree(l) || evaluateTree(r)) : (evaluateTree(l) && evaluateTree(r));` does this automatically.
