# 160. Intersection of Two Linked Lists

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Linked List | Hash Table, Linked List, Two Pointers |

[Problem on LeetCode](https://leetcode.com/problems/intersection-of-two-linked-lists/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 75 ms (beats 14.0%), memory 28.8 MB (beats 9.7%)

## Why it works
It stores every node of list A in a hash set, then walks list B. The first node of B that's already in the set is where the lists merge. The set compares **node addresses**, not values, which is what intersection means here.

## Complexity
- **Time:** `O(m + n)`.
- **Space:** `O(m)` for the set.

## How it could be improved
- **Two-pointer switch:** walk `a` through A then B, and `b` through B then A. Both pointers travel exactly `m + n` steps, so they arrive at the intersection (or both reach null) together. That's `O(1)` space, and it's the follow-up the problem asks for.
- A version with no hashing will also fix the low runtime percentile.
