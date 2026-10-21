# 3. Longest Substring Without Repeating Characters

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Sliding Window | Hash Table, String, Sliding Window |

[Problem on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 21 ms (beats 72.8%), memory 16.9 MB (beats 99.8%)

## Why it works
Classic **sliding window**. `[left, right)` always holds a substring with no repeated characters, tracked in a set. When `s[i]` is new, the window grows to the right. When it's a duplicate, the window shrinks from the left until the duplicate is gone. Every valid window is measured, so the maximum length is found.

## Complexity
- **Time:** `O(n log k)`, where each character enters and leaves the window at most once and `std::set` operations cost `log k` (k ≤ alphabet size).
- **Space:** `O(k)` for the set.

## How it could be improved
- Store the **last index** of each character in an `int last[128]` (or 256) array. On a repeat, jump `left = max(left, last[c] + 1)` directly instead of erasing one character at a time. That gives true `O(n)` time with `O(1)` space and no tree overhead.
- `set<int>` → `unordered_set<char>` or a `bool seen[128]` array would already be faster.
