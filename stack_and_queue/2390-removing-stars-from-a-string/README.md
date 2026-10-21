# 2390. Removing Stars From a String

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Stack & Queue | String, Stack, Simulation |

[Problem on LeetCode](https://leetcode.com/problems/removing-stars-from-a-string/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 20 ms (beats 51.2%), memory 29.7 MB (beats 43.8%)

## Why it works
Each `*` removes the closest non-star character to its left, which is the **most recent** one. That's stack behaviour: push letters, pop on `*`. The stack then holds the answer in reverse, so it's popped into a string and reversed.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(n)`.

## How it could be improved
- Use the **result string itself as the stack** (`res.push_back(c)` / `res.pop_back()`). That needs no separate stack, no reverse, and half the memory.
- The `"invalid"` branch can't happen (the problem guarantees the operations are valid).
