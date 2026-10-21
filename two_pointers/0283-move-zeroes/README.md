# 283. Move Zeroes

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Two Pointers | Array, Two Pointers |

[Problem on LeetCode](https://leetcode.com/problems/move-zeroes/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 23.7 MB (beats 81.7%)

## Why it works
`zerop` marks where the next non-zero belongs. Scanning with `curr`, each non-zero is moved down to `zerop` and its old slot is set to 0. Because `zerop ≤ curr` always holds, non-zeros keep their relative order and all zeros collect at the end.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(1)`.

## How it could be improved
- It's already optimal. A cleaner equivalent: `if (nums[curr] != 0) swap(nums[zerop++], nums[curr]);`, which handles the `zerop == curr` case naturally.
- The `len == 1` early return isn't needed.
