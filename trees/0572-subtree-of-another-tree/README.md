# 572. Subtree of Another Tree

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Trees | Tree, Depth-First Search, String Matching, Binary Tree, Hash Function |

[Problem on LeetCode](https://leetcode.com/problems/subtree-of-another-tree/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 28.9 MB (beats 68.9%)

## Why it works
For every node of `root`, check whether the subtree there is **identical** to `subRoot` (the Same Tree check). If any position matches, return true.

## Complexity
- **Time:** `O(m · n)` in the worst case, where `m` and `n` are the tree sizes.
- **Space:** `O(h)` recursion stack.

## How it could be improved
- **Serialize + string match:** serialize both trees in preorder with null markers (e.g. `"#"` and delimiters, so 2 and 12 can't be confused). Then check substring containment with **KMP** in `O(m + n)`.
- **Merkle hashing:** hash each subtree bottom-up and compare hashes. That's `O(m + n)` expected.
