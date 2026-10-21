# 39. Combination Sum

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Backtracking | Array, Backtracking |

[Problem on LeetCode](https://leetcode.com/problems/combination-sum/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 3 ms (beats 49.9%), memory 17.8 MB (beats 22.1%)

## Why it works
**Backtracking with include/exclude choices.** At index `i` you either use `candidates[i]` again (stay at `i`, since reuse is allowed) or move on to `i + 1`. Moving forward only ensures each combination is generated once, in non-decreasing index order. Branches stop when `sum > target` or the candidates run out, and a combination is recorded when `sum == target`.

## Complexity
- **Time:** exponential, roughly `O(2^(T/min))` where `T` = target and `min` = the smallest candidate (each path has depth at most `T/min`).
- **Space:** `O(T/min)` for the recursion depth and `curr` (excluding output).

## How it could be improved
- **Sort the candidates** first and loop `for (j = i; j < n && candidates[j] <= remaining; j++)`. Once a candidate is too big, every later one is too, so the whole branch is pruned.
- Pass the **remaining** target (`target - num`) instead of carrying both `sum` and `target`.
