# 207. Course Schedule

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Graphs | Depth-First Search, Breadth-First Search, Graph Theory, Topological Sort, Directed Acyclic Graph |

[Problem on LeetCode](https://leetcode.com/problems/course-schedule/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 3 ms (beats 77.6%), memory 20.1 MB (beats 34.9%)

## Why it works
**Kahn's topological sort.** Count each course's prerequisites (its in-degree), then repeatedly "take" courses with none left, decrementing their dependents. If every course gets taken, there's no cycle. A cycle leaves courses whose in-degree never reaches 0, so `count < numCourses`.

## Complexity
- **Time:** `O(V + E)`.
- **Space:** `O(V + E)` for the adjacency list.

## How it could be improved
- `for (vector<int> p : prs)` **copies** every pair; use `for (const auto& p : prs)`.
- DFS with three colours (unvisited, visiting, done) is the other standard approach. It's the same complexity.
