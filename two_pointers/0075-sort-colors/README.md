# 75. Sort Colors

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Two Pointers | Array, Two Pointers, Sorting, Quicksort, Bubble Sort |

[Problem on LeetCode](https://leetcode.com/problems/sort-colors/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 11.7 MB (beats 11.9%)

## Why it works
**Counting sort:** with only three values (0, 1, 2), count each one, then overwrite the array with that many 0s, then 1s, then 2s.

## Complexity
- **Time:** `O(n)`, two passes.
- **Space:** `O(1)` (a fixed array of 3 counters).

## How it could be improved
- The follow-up asks for **one pass**: use the **Dutch National Flag** algorithm with three pointers, `low`, `mid` and `high`. Swap 0s to `low` and 2s to `high`, and leave 1s in the middle.
- In the rewrite loop, `freq[0] + freq[1] + freq[2] > i` is always true, so the final branch can be a plain `else`.
