# 278. First Bad Version

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Binary Search | Binary Search, Interactive |

[Problem on LeetCode](https://leetcode.com/problems/first-bad-version/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 3 ms (beats 15.8%), memory 7.9 MB (beats 41.1%)

## Why it works
The versions form a sequence of goods followed by bads (`F F F T T T`), so binary search can find the boundary. The code searches indices `0..n-1`, where index `i` stands for version `i + 1`. It remembers the last good index in `idx`, and the first bad version is the one right after it.

## Complexity
- **Time:** `O(log n)` API calls.
- **Space:** `O(1)`.

## How it could be improved
- `isBadVersion(mid)` is called **twice** per step (the `else if (!isBadVersion(mid))`). A plain `else` halves the API calls, and minimizing API calls is the point of this problem.
- The off-by-one shift is confusing: index 0 actually queries version 0, which doesn't exist. Search `[1, n]` directly with `while (left < right) { mid = left + (right - left) / 2; if (isBadVersion(mid)) right = mid; else left = mid + 1; } return left;`.
