# 1508. Range Sum of Sorted Subarray Sums

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Prefix Sum | Array, Two Pointers, Binary Search, Sorting, Prefix Sum |

[Problem on LeetCode](https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 97 ms (beats 24.5%), memory 27.2 MB (beats 22.3%)

## Why it works
It generates every subarray sum by extending a running sum from each start index, sorts all `n(n+1)/2` sums, and adds up positions `left..right` (1-indexed) modulo `10⁹+7`.

## Complexity
- **Time:** `O(n² log n)`, sorting `n²/2` sums.
- **Space:** `O(n²)`.

## How it could be improved
- Passes comfortably at `n ≤ 1000`. To scale further:
  - **Min-heap merge:** treat each start index as a sorted stream of sums and pop the smallest `right` times. That's `O(right · log n)` time and `O(n)` space.
  - **Binary search on the sum value + two pointers** over prefix sums. Count how many subarray sums are `≤ x` and their total, then answer `f(right) - f(left - 1)`. That's `O(n log S)`.
- `sums.reserve(n * (n + 1) / 2)` avoids reallocations.
