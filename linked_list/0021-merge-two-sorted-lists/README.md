# 21. Merge Two Sorted Lists

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Linked List | Linked List, Recursion |

[Problem on LeetCode](https://leetcode.com/problems/merge-two-sorted-lists/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 19.7 MB (beats 8.0%)

## Why it works
This is the merge step of merge sort. It picks the smaller head as the start, then repeatedly attaches whichever of the two current nodes is smaller. When one list runs out, the rest of the other is already sorted and is attached as-is. Nodes are **re-linked, not copied**.

## Complexity
- **Time:** `O(m + n)`.
- **Space:** `O(1)` extra.

## How it could be improved
- **Bug:** when both lists are empty it returns `head`, which is **uninitialized** (undefined behaviour). It should return `nullptr`.
- Use a **dummy node** (`ListNode dummy; ListNode* tail = &dummy;`). That removes all the head special-casing, and the result is just `dummy.next`.
- `tail->next = list1 ? list1 : list2;` replaces the two trailing `if`s.
