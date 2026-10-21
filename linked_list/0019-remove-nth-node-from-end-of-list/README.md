# 19. Remove Nth Node From End of List

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Linked List | Linked List, Two Pointers |

[Problem on LeetCode](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 14.8 MB (beats 90.6%)

## Why it works
The first pass counts the length `L`. The node to delete is then at index `L - n` from the front. The second pass walks there while tracking `prev` and relinks `prev->next` past it. The `j == 0` case (deleting the head) returns the new head.

## Complexity
- **Time:** `O(L)`, two passes.
- **Space:** `O(1)`.

## How it could be improved
- **One pass with two pointers:** move `fast` `n` steps ahead, then advance `fast` and `slow` together until `fast` hits the end. `slow` is then just before the target.
- Start both pointers at a **dummy node** before `head`. Removing the head then needs no special case.
- The removed node is never `delete`d (a small leak, fine on LeetCode).
