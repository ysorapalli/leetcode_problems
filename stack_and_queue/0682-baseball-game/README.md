# 682. Baseball Game

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Easy | Stack & Queue | Array, Stack, Simulation |

[Problem on LeetCode](https://leetcode.com/problems/baseball-game/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 4 ms (beats 4.5%), memory 12.8 MB (beats 41.3%)

## Why it works
A stack holds the valid scores. Each operation maps directly onto it: `C` pops, `D` pushes double the top, `+` peeks at the top two and pushes their sum, and a number is pushed as-is. The answer is the sum of whatever remains.

## Complexity
- **Time:** `O(n)`.
- **Space:** `O(n)`.

## How it could be improved
- A `vector<int>` used as a stack makes `+` trivial (`s[s.size()-1] + s[s.size()-2]`) without pop/push juggling, and `accumulate` sums it.
- Compare the first character (`op[0] == 'C'`) instead of full string comparisons.
