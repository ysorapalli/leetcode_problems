# 141. Linked List Cycle

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Linked List | Hash Table, Linked List, Two Pointers, Floyd's Cycle Finding Algorithm |

[Problem on LeetCode](https://leetcode.com/problems/linked-list-cycle/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 8 ms (beats 80.7%), memory 11.8 MB (beats 80.5%)

## Why it works
**Floyd's tortoise and hare.** `slow` moves 1 step and `fast` moves 2. Without a cycle, `fast` reaches null. With a cycle, both pointers end up inside it and the gap closes by 1 each step, so they must meet.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(1)`.

## How it could be improved
- Already optimal. Starting both at `head` (rather than `fast = head->next`) is the more common convention and removes the initial null check.
