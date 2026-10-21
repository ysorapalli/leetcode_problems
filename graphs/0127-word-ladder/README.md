# 127. Word Ladder

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Hard | Graphs | Hash Table, String, Breadth-First Search, Bidirectional Search |

[Problem on LeetCode](https://leetcode.com/problems/word-ladder/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 95 ms (beats 34.2%), memory 19.6 MB (beats 94.0%)

## Why it works
Words are graph nodes, and an edge joins two words that differ by one letter. The shortest transformation is a **shortest path in an unweighted graph, so BFS**. For each word in the current level, every position is tried with all 26 letters, and dictionary words not seen before are enqueued. Erasing a word from the set on enqueue acts as the visited marker.

## Complexity
- **Time:** `O(N · L² · 26)`, where `N` is the dictionary size and `L` the word length. Each of `L · 26` candidates per word costs `O(L)` to build and hash.
- **Space:** `O(N · L)` for the set and queue.

## How it could be improved
- **Bidirectional BFS:** expand from both `beginWord` and `endWord`, always growing the smaller frontier. This often explores dramatically fewer nodes.
- Mutate the word **in place** (`char orig = word[i]; word[i] = c; ...; word[i] = orig;`) instead of copying `changed = word` for every candidate.
- The `letters` vector is unnecessary: loop `for (char c = 'a'; c <= 'z'; ++c)`.
