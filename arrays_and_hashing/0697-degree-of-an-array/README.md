# 697. Degree of an Array

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Arrays & Hashing | Array, Hash Table |

[Problem on LeetCode](https://leetcode.com/problems/degree-of-an-array/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 10 ms (beats 68.9%), memory 30 MB (beats 46.5%)

## Why it works
The shortest subarray with the same degree must contain **every occurrence** of some most-frequent element, so it spans from that element's first index to its last. The code records the first index, last index and count for each value, then takes the minimum span among the values with maximum count.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(n)`.

## How it could be improved
- It can be done in one pass with one map: store `{count, firstIndex}`, and update the best answer as you go. When a value's count beats the max, or ties it with a shorter span, update the answer.
- With values bounded (`< 50000`), plain arrays are much faster than three hash maps.
