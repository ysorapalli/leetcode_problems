# 1614. Maximum Nesting Depth of the Parentheses

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Stack & Queue | String, Stack, Bracket Sequences |

[Problem on LeetCode](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 8.7 MB (beats 9.0%)

## Why it works
The nesting depth at any point is the number of currently open parentheses. The stack size tracks exactly that, and the maximum it reaches is the answer.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(n)` for the stack.

## How it could be improved
- Only the stack's **size** is used, so replace it with an integer counter: `++depth` on `'('`, `--depth` on `')'`, and track the max. That's `O(1)` space.
