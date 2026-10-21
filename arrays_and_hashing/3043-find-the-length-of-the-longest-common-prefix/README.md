# 3043. Find the Length of the Longest Common Prefix

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Arrays & Hashing | Array, Hash Table, String, Trie |

[Problem on LeetCode](https://leetcode.com/problems/find-the-length-of-the-longest-common-prefix/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 115 ms (beats 97.8%), memory 134.8 MB (beats 99.0%)

## Why it works
Every prefix of a number is obtained by repeatedly dividing by 10. All prefixes of `arr1` numbers go into a hash set. For each `arr2` number, strip digits until it matches a stored prefix. The digit count of that match is a common prefix length, and the answer is the max. Stopping insertion early when a prefix is already present avoids redundant work.

## Complexity
- **Time:** `O((m + n) · d)` with `d ≤ 9` digits.
- **Space:** `O(m · d)`.

## How it could be improved
- Already fast (beats 97.8% runtime). The textbook alternative is a **trie of digit strings**. It's the same complexity, but more memory-hungry in C++.
- `log10(n) + 1` uses floating point. Counting digits with integer division avoids any rounding risk.
