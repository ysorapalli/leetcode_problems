# 833. Find And Replace in String

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Arrays & Hashing | Array, Hash Table, String, Sorting |

[Problem on LeetCode](https://leetcode.com/problems/find-and-replace-in-string/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 0 ms (beats 100.0%), memory 14.3 MB (beats 32.3%)

## Why it works
All replacements are checked against the **original** string and are guaranteed not to overlap, so they can be applied independently. First, keep only the operations whose source actually appears at its index (an ordered `map` from index to `(source, target)`). Then rebuild the string left to right: at a matched index emit the target and skip `source.size()` characters, otherwise copy one character.

## Complexity
- **Time:** `O(n + Σ|source| + k log k)`.
- **Space:** `O(n + Σ|target|)`.

## How it could be improved
- `s.substr(...)` allocates a temporary string for every check. Use `s.compare(idx, len, src) == 0` instead.
- A `vector<int> match(n, -1)` indexed by position (storing the operation number) replaces the ordered map with `O(1)` lookups.
- `result.reserve(...)` avoids repeated reallocations.
