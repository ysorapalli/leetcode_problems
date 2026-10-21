# 739. Daily Temperatures

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Stack & Queue | Array, Stack, Monotonic Stack |

[Problem on LeetCode](https://leetcode.com/problems/daily-temperatures/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 30 ms (beats 22.7%), memory 111.9 MB (beats 6.2%)

## Why it works
**Monotonic decreasing stack** of `(temperature, index)` pairs for days still waiting for a warmer day. When a warmer day arrives, it is the answer for every cooler day on top of the stack: pop them and record `i - index`. Each day is pushed and popped once.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(n)`.

## How it could be improved
- Store only **indices** (`stack<int>` or a `vector<int>`) and read `temperatures[idx]`. That halves the stack memory, which is behind the 111 MB footprint.
- The loop condition reads `temp` before checking `!temps.empty()`. The standard form is safer: `while (!st.empty() && temperatures[st.back()] < temperatures[i])`.
- **`O(1)` extra space:** iterate from the right and jump using already-computed answers (`j += ans[j]`).
