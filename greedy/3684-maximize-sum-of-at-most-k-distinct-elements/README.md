# 3684. Maximize Sum of At Most K Distinct Elements

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Greedy | Array, Hash Table, Greedy, Sorting |

[Problem on LeetCode](https://leetcode.com/problems/maximize-sum-of-at-most-k-distinct-elements/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 12 ms (beats 11.7%), memory 29.2 MB (beats 39.6%)

## Why it works
To maximize the sum with distinct values, take the **largest distinct values**. A `set<int, greater<int>>` deduplicates and orders the values descending, then the first `k` are taken.

## Complexity
- **Time:** `O(n log n)`.
- **Space:** `O(n)`.

## How it could be improved
- `sort(nums.rbegin(), nums.rend())` + `unique` + `erase`, then take the first `k`. It's the same complexity, but uses contiguous memory and is faster in practice than a red-black tree.
