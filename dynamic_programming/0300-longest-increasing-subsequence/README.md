# 300. Longest Increasing Subsequence

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Dynamic Programming | Array, Binary Search, Dynamic Programming, Longest Increasing Subsequence |

[Problem on LeetCode](https://leetcode.com/problems/longest-increasing-subsequence/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 103 ms (beats 39.3%), memory 14.3 MB (beats 71.4%)

## Why it works
`dp[i]` is the length of the longest increasing subsequence **ending at** `i`. For each earlier `j` with `nums[j] < nums[i]`, `nums[i]` can extend that subsequence, giving `dp[j] + 1`. The answer is the maximum over all `dp[i]`.

## Complexity
- **Time:** `O(n²)`.
- **Space:** `O(n)`.

## How it could be improved
- **`O(n log n)` with patience sorting:** keep `tails`, where `tails[k]` is the smallest possible tail of an increasing subsequence of length `k + 1`. For each number, `lower_bound` it in `tails` and replace that slot, or append if it's larger than every tail. The answer is `tails.size()`. This is the follow-up the problem asks for.
- `maxE` is updated inside the inner loop; moving it after the loop does the same with fewer operations.
