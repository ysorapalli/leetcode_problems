# 203. Remove Linked List Elements

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Linked List | Linked List, Recursion |

[Problem on LeetCode](https://leetcode.com/problems/remove-linked-list-elements/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 20 MB (beats 90.8%)

## Why it works
It first skips any matching nodes at the front to find the real head. Then, for each node, it unlinks the next node while it matches, and only advances when the next node is kept. That way consecutive matches are all removed.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(1)`.

## How it could be improved
- A **dummy node** before `head` removes the separate "leading matches" loop: `ListNode dummy(0, head);`, then run the same loop from `&dummy` and return `dummy.next`.
- Removed nodes aren't `delete`d (a small leak, fine on LeetCode).
