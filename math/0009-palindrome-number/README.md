# 9. Palindrome Number

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Math | Math |

[Problem on LeetCode](https://leetcode.com/problems/palindrome-number/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 4 ms (beats 35.4%), memory 8.4 MB (beats 91.0%)

## Why it works
It reverses the digits of `x` into `y` (stored in a `long` so the reversal can't overflow) and checks `x == y`. Negative numbers never enter the loop, so `y = 0 ≠ x` and they correctly return `false`.

## Complexity
- **Time:** `O(log₁₀ x)`, one iteration per digit.
- **Space:** `O(1)`.

## How it could be improved
- Reverse only **half** the number: loop while `x > reversed`, then compare `x == reversed || x == reversed / 10`. This halves the work and needs no `long`.
- Return early for `x < 0` and for numbers ending in 0 (other than 0 itself).
- `if (x == y) return true; return false;` can simply be `return x == y;`.
