# 671. Second Minimum Node In a Binary Tree

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Trees | Tree, Depth-First Search, Binary Tree |

[Problem on LeetCode](https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 9.3 MB (beats 47.4%)

## Why it works
It collects every value into an ordered `std::set`. The set's smallest element is the minimum, so after erasing it, the new smallest is the second minimum. If the set had only one value, there is none and it returns -1.

## Complexity
- **Time:** `O(n log n)`.
- **Space:** `O(n)`.

## How it could be improved
- It doesn't use the special property that every node equals the **min of its children**, which makes the root the global minimum. A DFS can then find the smallest value `> root->val`: when a node's value is already larger than the root, don't descend further (its subtree can only be larger). That's `O(n)` time, `O(h)` space and no set.
- The member `set` isn't cleared between calls; that's fine on LeetCode but a bug if the object is reused.
