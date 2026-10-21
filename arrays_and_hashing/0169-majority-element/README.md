# 169. Majority Element

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Arrays & Hashing | Array, Hash Table, Divide and Conquer, Sorting, Counting, Boyer–Moore Majority Vote Algorithm |

[Problem on LeetCode](https://leetcode.com/problems/majority-element/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 4 ms (beats 23.2%), memory 28 MB (beats 99.9%)

## Why it works
The majority element appears more than `n/2` times, so after sorting it **must occupy the middle index** `n/2`, wherever its block starts.

## Complexity
- **Time:** `O(n log n)` for the sort.
- **Space:** `O(1)` to `O(log n)` for the sort's stack (it also mutates the input).

## How it could be improved
- **Boyer–Moore voting:** keep a `candidate` and a `count`. Increment on a match and decrement otherwise, adopting a new candidate when the count hits 0. The majority survives the cancellation. That's `O(n)` time and `O(1)` space without modifying the input, and it's the follow-up the problem asks for.
