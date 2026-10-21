# 232. Implement Queue using Stacks

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Stack & Queue | Stack, Design, Queue |

[Problem on LeetCode](https://leetcode.com/problems/implement-queue-using-stacks/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 10.2 MB (beats 45.4%)

## Why it works
Two stacks: `input` receives pushes, `output` serves pops. When `output` is empty, pouring all of `input` into it **reverses the order**, putting the oldest element on top, which is FIFO. Elements are only moved when `output` runs dry.

## Complexity
- **push / empty:** `O(1)`.
- **pop / peek:** `O(1)` **amortized**, since each element is moved at most once.
- **Space:** `O(n)`.

## How it could be improved
- Already the optimal design, and it's exactly what the follow-up asks for.
