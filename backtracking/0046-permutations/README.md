# 46. Permutations

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Backtracking | Array, Backtracking |

[Problem on LeetCode](https://leetcode.com/problems/permutations/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 10.6 MB (beats 69.2%)

## Why it works
**Backtracking over positions.** At each level, try every number not yet used (tracked by `used[]`), add it to `curr`, recurse, then undo the choice. When `curr` has length `n`, a full permutation is recorded. Each permutation is built exactly once because the numbers are distinct.

## Complexity
- **Time:** `O(n · n!)`: `n!` leaves, and copying each into `res` costs `O(n)`.
- **Space:** `O(n)` for recursion, `curr` and `used` (excluding output).

## How it could be improved
- **Swap-based** generation (`swap(nums[start], nums[i])`, then recurse on `start + 1`) drops the `used` array and `curr` entirely.
- `std::next_permutation` on the sorted array is a one-liner alternative.
- The unused `int n` can be removed.
