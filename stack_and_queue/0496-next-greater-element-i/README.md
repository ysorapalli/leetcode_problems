# 496. Next Greater Element I

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Stack & Queue | Array, Hash Table, Stack, Monotonic Stack |

[Problem on LeetCode](https://leetcode.com/problems/next-greater-element-i/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 12.9 MB (beats 15.0%)

## Why it works
**Monotonic stack.** Scanning `nums2` from right to left, the stack holds candidates for "next greater". Before pushing `n2`, pop every value `≤ n2`: `n2` blocks them from being anyone's next greater to its left. The top that remains (if any) is `n2`'s next greater element. The results are stored in a map, then looked up for each `nums1` value.

## Complexity
- **Time:** `O(m + n)`, each element is pushed and popped at most once.
- **Space:** `O(n)`.

## How it could be improved
- Already the optimal approach (the follow-up). `res.reserve(nums1.size())` avoids reallocations.
