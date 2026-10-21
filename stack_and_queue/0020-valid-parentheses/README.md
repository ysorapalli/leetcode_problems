# 20. Valid Parentheses

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Stack & Queue | String, Stack, Bracket Sequences |

[Problem on LeetCode](https://leetcode.com/problems/valid-parentheses/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 8.8 MB (beats 62.8%)

## Why it works
A **stack** mirrors how brackets nest: the most recently opened bracket must be the first one closed. Opening brackets are pushed. Each closing bracket must match the top of the stack, otherwise the string is invalid. At the end, the stack must be empty so that nothing is left unclosed.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(n)` in the worst case (all openers).

## How it could be improved
- Early exit when `s.size()` is odd: it can never be valid.
- Push the *expected closer* instead (push `')'` when you see `'('`). Then the check is just `stack.top() == ch`, with no three-way condition.
- `if (paran.empty()) return true; return false;` → `return paran.empty();`.
