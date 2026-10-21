# 3048. Earliest Second to Mark Indices I

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Binary Search | Array, Binary Search |

[Problem on LeetCode](https://leetcode.com/problems/earliest-second-to-mark-indices-i/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 23 ms (beats 33.3%), memory 48.9 MB (beats 33.3%)

## Why it works
**Binary search on the answer:** if every index can be marked within `t` seconds, it can also be done within any `t' > t`. The feasibility check is greedy. Mark each index at its **last** occurrence within the first `t` seconds, and use every other second to decrement something, building a budget `count`. At each marking point, the budget must cover that index's `nums` value.

## Complexity
- **Time:** `O(m log m)` average.
- **Space:** `O(m)` per check.

## How it could be improved
- Replace `unordered_map<int,int> last` with a `vector<int>(n + 1, -1)` reused across checks. Indices are `1..n`, so that's a direct array with no hashing.
- Set `left = n + sum(nums)` as a lower bound: you need at least that many seconds. That narrows the search.
