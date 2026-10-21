# 1608. Special Array With X Elements Greater Than or Equal X

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Binary Search | Array, Binary Search, Sorting |

[Problem on LeetCode](https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 11.1 MB (beats 88.2%)

## Why it works
After sorting, a binary search counts how many elements are `≥ x` (`n - firstIndex(≥ x)`). The code tries every candidate `x ∈ [1, n]` and returns the one where the count equals `x`. `x` can't exceed `n`, and if a valid `x` exists it is unique.

## Complexity
- **Time:** `O(n log n)`.
- **Space:** `O(1)` to `O(log n)` for the sort.

## How it could be improved
- **Counting, `O(n)`:** bucket the values, capping anything above `n` at `n`. Then walk `x` from `n` down to 0, accumulating "count ≥ x", and return `x` when it equals `x`.
- When nothing is `≥ k`, the helper relies on `idx = -1 → n - (-1)` never matching. Correct, but obscure; returning 0 explicitly is clearer. The unused `flag` can also go.
