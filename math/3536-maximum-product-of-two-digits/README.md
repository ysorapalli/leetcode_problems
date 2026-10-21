# 3536. Maximum Product of Two Digits

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Math | Math, Sorting |

[Problem on LeetCode](https://leetcode.com/problems/maximum-product-of-two-digits/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 9.4 MB (beats 7.3%)

## Why it works
The largest product of two digits comes from the two largest digits. It converts the number to a string, sorts the characters, and multiplies the last two.

## Complexity
- **Time:** `O(d log d)` with `d ≤ 10` digits.
- **Space:** `O(d)`.

## How it could be improved
- Track the top two digits while peeling them off with `% 10` / `/ 10`. That's `O(d)` time, `O(1)` space, and no string or sort.
