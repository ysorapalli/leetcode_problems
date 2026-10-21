# 2. Add Two Numbers

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Linked List | Linked List, Math, Recursion |

[Problem on LeetCode](https://leetcode.com/problems/add-two-numbers/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 4 ms (beats 21.2%), memory 77 MB (beats 92.8%)

## Why it works
The lists store digits in reverse order, so the head is the ones place. That lets us add column by column exactly like grade-school addition. Each step adds the two digits plus the carry, writes `total % 10` as the new node and carries `total / 10` forward. The two "leftover" loops handle lists of unequal length, and the final `if(carry)` adds an extra digit for cases like 5 + 5 = 10.

## Complexity
- **Time:** `O(max(m, n))`, one pass over both lists.
- **Space:** `O(max(m, n))` for the output list (`O(1)` extra besides the result).

## How it could be improved
- Collapse the three loops into one: `while (l1 || l2 || carry)`, treating a missing node as 0. Less code, same complexity.
- Allocate the node with its value directly (`new ListNode(digit)`) instead of creating and then assigning.
- The dummy head node is never freed. Use a stack-allocated dummy (`ListNode dummy;`) to avoid the leak.
