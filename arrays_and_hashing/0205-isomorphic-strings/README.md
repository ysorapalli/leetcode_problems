# 205. Isomorphic Strings

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Arrays & Hashing | Hash Table, String |

[Problem on LeetCode](https://leetcode.com/problems/isomorphic-strings/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 3 ms (beats 38.2%), memory 9.4 MB (beats 27.7%)

## Why it works
Isomorphic means the character mapping is a **bijection**. `ref` enforces that each `s` char always maps to the same `t` char. `consumed` enforces that no two `s` chars map to the same `t` char. If both hold for every position, the strings are isomorphic.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(k)`, where `k` is the alphabet size (at most 256).

## How it could be improved
- Replace the hash containers with two fixed arrays, `int sToT[256]` and `int tToS[256]`, or store the **last-seen index** of each char in both strings and require them to match. It's the same complexity but much faster in practice (no hashing).
