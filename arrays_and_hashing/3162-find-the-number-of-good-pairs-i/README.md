# 3162. Find the Number of Good Pairs I

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Arrays & Hashing | Array, Hash Table |

[Problem on LeetCode](https://leetcode.com/problems/find-the-number-of-good-pairs-i/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 42.2 MB (beats 77.8%)

## Why it works
It checks every pair `(i, j)` directly and counts those where `nums1[i]` is divisible by `nums2[j] · k`.

## Complexity
- **Time:** `O(n · m)`.
- **Space:** `O(1)`.

## How it could be improved
- Fine for the small constraints here (`n, m ≤ 50`). For the larger version (II), count each `nums2[j] · k` in a frequency map, then for each `nums1[i]` enumerate its divisors up to `√nums1[i]` and sum the matching frequencies. That's `O(n√V + m)`.
