# 1710. Maximum Units on a Truck

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Greedy | Array, Greedy, Sorting |

[Problem on LeetCode](https://leetcode.com/problems/maximum-units-on-a-truck/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 4 ms (beats 51.1%), memory 19.7 MB (beats 89.2%)

## Why it works
**Greedy:** every box takes one slot, so to maximize units, fill the truck with the boxes that have the most units per box first. Sort by units descending, take whole box types while they fit, and take a partial amount of the last one.

## Complexity
- **Time:** `O(n log n)`.
- **Space:** `O(log n)` for the sort.

## How it could be improved
- Units per box are bounded (`≤ 1000`), so **counting sort** into buckets by units gives `O(n + 1000)`.
- Naming a variable `max` shadows `std::max`; use `total` instead.
