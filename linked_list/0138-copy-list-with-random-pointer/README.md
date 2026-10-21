# 138. Copy List with Random Pointer

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Linked List | Hash Table, Linked List |

[Problem on LeetCode](https://leetcode.com/problems/copy-list-with-random-pointer/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 3 ms (beats 91.8%), memory 15.4 MB (beats 9.4%)

## Why it works
**Pass 1** creates a copy of every node and records `original → copy` in a hash map, linking the `next` pointers. **Pass 2** sets each copy's `random` using the map: `copy->random = map[orig->random]`. Two passes are needed because a `random` pointer may point forward to a node not yet copied.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(n)` for the map.

## How it could be improved
- **`O(1)` extra space (interleaving trick):** insert each copy right after its original (`A → A' → B → B'`). Then set `A'->random = A->random->next`, and finally unweave the two lists.
- Minor: the double semicolon `nodes[head] = newHead;;`.
