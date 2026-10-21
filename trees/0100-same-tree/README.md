# 100. Same Tree

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Trees | Tree, Depth-First Search, Breadth-First Search, Binary Tree |

[Problem on LeetCode](https://leetcode.com/problems/same-tree/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 12.8 MB (beats 45.6%)

## Why it works
Two trees are the same if both roots are null, or both are non-null with equal values **and** equal left subtrees **and** equal right subtrees. This recursive definition maps directly onto a simultaneous preorder walk, and `&&` short-circuits on the first mismatch.

## Complexity
- **Time:** `O(n)`, where `n` is the size of the smaller tree.
- **Space:** `O(h)` recursion stack.

## How it could be improved
- Already optimal. The null checks can be condensed: `if (!p || !q) return p == q;`.
- `isSameTree` can recurse on itself directly, with no helper needed.
