# 206. Reverse Linked List

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Linked List | Linked List, Recursion |

[Problem on LeetCode](https://leetcode.com/problems/reverse-linked-list/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 13.4 MB (beats 38.0%)

## Why it works
Recursively flip one pointer at a time. `curr->next = prev` reverses the link, then the same step repeats with `(curr, next)`. When `curr` is null, `prev` is the old tail, which is the new head.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(n)` recursion stack. C++ doesn't guarantee tail-call elimination, so this can overflow on very long lists.

## How it could be improved
- The **iterative** version is the same three pointer moves in a loop, with `O(1)` space:
  `while (curr) { auto nxt = curr->next; curr->next = prev; prev = curr; curr = nxt; } return prev;`
