# 560. Subarray Sum Equals K

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Prefix Sum | Array, Hash Table, Prefix Sum |

[Problem on LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 32 ms (beats 92.1%), memory 45.5 MB (beats 38.6%)

## Why it works
**Prefix sums + hash map.** If the running sum is `S` now and was `S - k` at some earlier point, the subarray between them sums to `k`. The map counts how many times each prefix sum has occurred. `prefixSum[0] = 1` handles subarrays that start at index 0.

## Complexity
- **Time:** `O(n)` on average.
- **Space:** `O(n)`.

## How it could be improved
- Already the optimal approach (sliding window fails here because of negative numbers). Minor: a single `auto it = find(...)` avoids the second map lookup, and the unused `n` can be removed.
