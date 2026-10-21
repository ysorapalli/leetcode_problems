# 1318. Minimum Flips to Make a OR b Equal to c

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Bit Manipulation | Bit Manipulation |

[Problem on LeetCode](https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 7.9 MB (beats 6.6%)

## Why it works
It checks every bit from the highest relevant position down. If `(a|b)` already matches `c` at that bit, nothing is needed. If `c` needs a 1 but both are 0, one flip suffices. If `c` needs a 0, **every** 1 among `a` and `b` at that bit must be flipped (could be 2).

## Complexity
- **Time:** `O(log max(a, b, c))`, at most 31 iterations.
- **Space:** `O(1)`.

## How it could be improved
- It's already optimal. A branch-free one-liner computes the same thing with popcounts: `popcount((a | b) ^ c) + popcount(a & b & ~c)`. The second term adds the extra flip where both `a` and `b` are 1 but `c` is 0.
