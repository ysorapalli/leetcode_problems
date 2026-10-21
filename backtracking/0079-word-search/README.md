# 79. Word Search

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Backtracking | Array, String, Backtracking, Depth-First Search, Matrix |

[Problem on LeetCode](https://leetcode.com/problems/word-search/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 919 ms (beats 7.3%), memory 11.9 MB (beats 7.6%)

## Why it works
**DFS with backtracking** from every cell. A path continues only if the current cell matches `word[place]` and hasn't been used. The cell is marked in `visited` before exploring its 4 neighbours and unmarked afterwards, so other paths can reuse it.

## Complexity
- **Time:** `O(m · n · 3^L)`: each start cell explores at most 3 new directions per letter (it never goes back) to depth `L`.
- **Space:** `O(L)` recursion depth plus `O(m · n)` for `visited`.

## How it could be improved
- **Biggest win:** `string word` is passed **by value**, so every recursive call copies the word. Use `const string& word`. That alone should cut most of the 919 ms.
- Mark cells **in place** (`board[x][y] = '#'`, then restore) instead of a separate `visited` matrix.
- **Prune early:** if the board doesn't contain enough of each letter, return false before searching. Reversing the word when its last letter is rarer than its first shrinks the search tree.
- Remove the commented-out BFS attempt (BFS can't track per-path visited cells, which is why DFS is needed).
