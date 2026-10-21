# 2186. Minimum Number of Steps to Make Two Strings Anagram II

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Arrays & Hashing | Hash Table, String, Counting |

[Problem on LeetCode](https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 17 ms (beats 39.8%), memory 31.7 MB (beats 92.7%)

## Why it works
You can only **append**, so each string must gain whatever characters the other has in excess. For each letter, the steps needed are `|countS - countT|`, and the total is the sum over all 26 letters.

## Complexity
- **Time:** `O(m + n)`.
- **Space:** `O(1)`, two arrays of 26.

## How it could be improved
- One array is enough: `++cnt[c]` for `s` and `--cnt[c]` for `t`, then sum `abs(cnt[i])`.
- Remove the commented-out map version.
