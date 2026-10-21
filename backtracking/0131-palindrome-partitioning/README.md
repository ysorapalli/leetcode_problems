# 131. Palindrome Partitioning

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Backtracking | String, Dynamic Programming, Backtracking |

[Problem on LeetCode](https://leetcode.com/problems/palindrome-partitioning/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 30 ms (beats 89.3%), memory 53.5 MB (beats 83.1%)

## Why it works
**Backtracking over cut positions.** From index `start`, try every end `end ≥ start`. If `s[start..end]` is a palindrome, take it, recurse on the rest, then undo the choice. Reaching the end of the string means the current list is a full valid partition.

## Complexity
- **Time:** `O(n · 2^n)`: up to `2^(n-1)` ways to cut, each with `O(n)` palindrome checks and substring copies.
- **Space:** `O(n)` recursion depth (excluding output).

## How it could be improved
- **Precompute palindromes** with DP: `isPal[i][j] = s[i] == s[j] && (j - i < 2 || isPal[i+1][j-1])`. Each check becomes `O(1)` instead of `O(n)`.
- Pass `s` as `const string&` (it's already by reference, good).
