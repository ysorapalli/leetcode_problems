# 198. House Robber

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Dynamic Programming | Array, Dynamic Programming |

[Problem on LeetCode](https://leetcode.com/problems/house-robber/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 10.2 MB (beats 76.9%)

## Why it works
For each house, the best total is either **skip it** (`prev1`, the best up to the previous house) or **rob it** (`prev2 + money`, the best up to two houses back plus this one). Only these two previous values matter, so two variables roll forward.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(1)`.

## How it could be improved
- Already optimal.
