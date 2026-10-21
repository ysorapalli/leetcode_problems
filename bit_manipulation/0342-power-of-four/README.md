# 342. Power of Four

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Bit Manipulation | Math, Bit Manipulation, Recursion |

[Problem on LeetCode](https://leetcode.com/problems/power-of-four/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 7.8 MB (beats 79.1%)

## Why it works
It repeatedly divides by 4 (as a `double`). A power of four reaches exactly `1`; anything else drops below 1 without hitting it. Non-positive inputs are below 1 immediately and return false.

## Complexity
- **Time:** `O(log₄ n)`.
- **Space:** `O(log₄ n)` recursion stack.

## How it could be improved
- Floating-point division works here (dividing by 4 is exact in binary), but **integer math is safer and clearer**: `while (n > 0 && n % 4 == 0) n /= 4; return n == 1;`.
- **`O(1)` bit trick (the follow-up):** `n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555)`. That checks exactly one bit is set, and that the bit is in an even position.
