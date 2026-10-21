# 875. Koko Eating Bananas

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Binary Search | Array, Binary Search |

[Problem on LeetCode](https://leetcode.com/problems/koko-eating-bananas/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 10 ms (beats 37.7%), memory 39.5 MB (beats 5.7%)

## Why it works
**Binary search on the answer.** If Koko can finish at speed `k`, she can finish at any faster speed. That monotonic property lets us binary-search `k ∈ [1, max(piles)]` for the smallest feasible speed. Each feasibility check sums `ceil(pile / k)` hours.

## Complexity
- **Time:** `O(n · log M)`, where `M = max(piles)`.
- **Space:** `O(n)` per check because of an accidental copy (see below). It should be `O(1)`.

## How it could be improved
- `vector<int> p = piles;` inside `canFinish` **copies the whole array every check** and is never used. Deleting it fixes the memory and time percentiles.
- Use integer ceiling `(pile + k - 1) / k` instead of `ceil(double)`.
- Compare `hours <= h` as `long long`; casting `hours` to `int` first could overflow.
