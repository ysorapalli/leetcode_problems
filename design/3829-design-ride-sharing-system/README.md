# 3829. Design Ride Sharing System

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Design | Hash Table, Design, Queue, Data Stream |

[Problem on LeetCode](https://leetcode.com/problems/design-ride-sharing-system/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 79 ms (beats 25.3%), memory 175.8 MB (beats 10.2%)

## Why it works
Riders and drivers are matched **first-come, first-served**, so each waits in its own FIFO queue. `matchDriverWithRider` pairs the two fronts. `waitingRiders` allows a quick check that a cancel request refers to a rider still waiting.

## Complexity
- **addRider / addDriver / match:** `O(1)`.
- **cancelRider:** `O(r)`, since the whole rider queue is rebuilt.
- **Space:** `O(r + d)`.

## How it could be improved
- **Lazy deletion:** on cancel, just erase the rider from `waitingRiders` (`O(1)`). In `matchDriverWithRider`, pop and skip any front rider that's no longer in the set. Every operation becomes amortized `O(1)`, and the costly queue copy (the source of the 175 MB footprint) disappears.
