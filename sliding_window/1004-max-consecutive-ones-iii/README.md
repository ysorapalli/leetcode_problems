# 1004. Max Consecutive Ones III

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Sliding Window | Array, Binary Search, Sliding Window, Prefix Sum |

[Problem on LeetCode](https://leetcode.com/problems/max-consecutive-ones-iii/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 1 ms (beats 45.6%), memory 79.4 MB (beats 7.6%)

## Why it works
**Sliding window with at most k zeros.** Grow `right` while the window is valid: a 1 is free, and a 0 costs one flip while flips remain. When a 0 arrives with no flips left, record the window and shrink from the left, refunding a flip if a 0 leaves. Every window considered contains at most `k` zeros, so the longest one is the answer.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(1)`.

## How it could be improved
- An equivalent, more conventional form: `for (right...) { if (nums[right] == 0) zeros++; while (zeros > k) { if (nums[left++] == 0) zeros--; } best = max(best, right - left + 1); }`.
- Even shorter, the "never-shrinking window" trick: shift `left` by at most one per step, and the answer is `n - left` at the end.
