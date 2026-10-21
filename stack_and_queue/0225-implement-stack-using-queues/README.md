# 225. Implement Stack using Queues

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Stack & Queue | Stack, Design, Queue |

[Problem on LeetCode](https://leetcode.com/problems/implement-stack-using-queues/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 9.4 MB (beats 100.0%)

## Why it works
Each `push` appends `x` and then **rotates the queue** `size - 1` times, moving all older elements behind it. The newest element is therefore always at the front, so `pop` and `top` are just the queue's front operations, which is LIFO behaviour.

## Complexity
- **push:** `O(n)`.
- **pop / top / empty:** `O(1)`.
- **Space:** `O(n)`.

## How it could be improved
- This one-queue design is the standard optimal answer. The alternative puts the cost on `pop` instead, so pick based on which operation is more frequent.
- `q.size() - 1` is unsigned. It's fine here (size ≥ 1 after the push), but it's a classic underflow trap when size can be 0.
