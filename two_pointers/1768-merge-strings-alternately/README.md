# 1768. Merge Strings Alternately

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Two Pointers | Two Pointers, String |

[Problem on LeetCode](https://leetcode.com/problems/merge-strings-alternately/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 1 ms (beats 47.0%), memory 8.4 MB (beats 83.1%)

## Why it works
Two pointers alternate characters while both strings have characters left, then append whatever remains of the longer string.

## Complexity
- **Time:** `O(m + n)`.
- **Space:** `O(m + n)` for the output.

## How it could be improved
- `finalstr.reserve(len1 + len2)` avoids repeated reallocations.
- A single loop `for (i = 0; i < max(len1, len2); i++)` that appends from each string when `i` is in range removes the two tail loops.
