# 950. Reveal Cards In Increasing Order

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Stack & Queue | Array, Queue, Sorting, Simulation |

[Problem on LeetCode](https://leetcode.com/problems/reveal-cards-in-increasing-order/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 13.3 MB (beats 7.2%)

## Why it works
Work **backwards from positions**. Simulating the reveal process on a queue of position labels (reveal the front, move the next label to the back) gives the order in which positions are revealed. The k-th revealed position must hold the k-th smallest card. The code uses the sorted card values as the position labels and maps each label to its reveal rank, then fills each position with the card of that rank.

## Complexity
- **Time:** `O(n log n)` for sorting.
- **Space:** `O(n)`.

## How it could be improved
- Use a queue of **indices** `0..n-1` directly: `ans[q.front()] = deck[k++]`, then rotate. This removes the hash map and the reliance on card values being unique.
