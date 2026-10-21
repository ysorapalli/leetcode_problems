# 1422. Maximum Score After Splitting a String

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Prefix Sum | String, Prefix Sum |

[Problem on LeetCode](https://leetcode.com/problems/maximum-score-after-splitting-a-string/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 9.6 MB (beats 9.8%)

## Why it works
The score for a split after index `i` is (zeros in `s[0..i]`) + (ones in `s[i+1..]`). The code precomputes **prefix counts of zeros** and **suffix counts of ones**, then tries every split point (both sides non-empty) and takes the best.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(n)` for the two arrays.

## How it could be improved
- **One pass, `O(1)` space:** score(i) = zerosLeft + (totalOnes - onesLeft). Since `totalOnes` is constant, maximize `zerosLeft - onesLeft` over `i ∈ [0, n-2]` and add `totalOnes` at the end (or count it in a first pass).
- The `n == 2` special case falls out of the general loop.
