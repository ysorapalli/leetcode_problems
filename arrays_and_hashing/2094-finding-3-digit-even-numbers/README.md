# 2094. Finding 3-Digit Even Numbers

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Arrays & Hashing | Array, Hash Table, Recursion, Sorting, Enumeration |

[Problem on LeetCode](https://leetcode.com/problems/finding-3-digit-even-numbers/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 11 ms (beats 50.7%), memory 15.3 MB (beats 13.8%)

## Why it works
Instead of permuting the digits, it **enumerates the answer space**: every even number in `[100, 998]`. A number is buildable if its digit counts never exceed the available counts in `freq`. Enumerating in increasing order means the output is already sorted and duplicate-free.

## Complexity
- **Time:** `O(n + 450 · 10)`, effectively `O(n)`.
- **Space:** `O(1)` extra.

## How it could be improved
- Allocating `vector<int> local(10)` 450 times is wasteful. Decrement `freq` for the three digits, check none went negative, then restore. Or compare the three digits' needs directly.
