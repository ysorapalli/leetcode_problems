# 133. Clone Graph

| Difficulty | Topic | LeetCode tags |
|---|---|---|
| Medium | Graphs | Hash Table, Depth-First Search, Breadth-First Search, Graph Theory |

[Problem on LeetCode](https://leetcode.com/problems/clone-graph/) · [Solution](solution.cpp)

**Best accepted submission (C++):** runtime 3 ms (beats 68.7%), memory 12.1 MB (beats 64.1%)

## Why it works
**BFS over the original graph** with a hash map from original nodes to their clones. When a neighbour is seen for the first time, its clone is created and the original is queued. Either way, the clone of that neighbour is linked into the current clone's neighbour list. Every edge is wired up once from each side, so the copy is structurally identical.

## Complexity
- **Time:** `O(V + E)`.
- **Space:** `O(V)` for the map and queue.

## How it could be improved
- `Node* res = new Node(head->val);` is created but never used, so it leaks. Remove it.
- `vector<Node*> neighs = curr->neighbors;` **copies** the neighbour list. Iterate `curr->neighbors` by `const auto&`.
- Key the map by `Node*` rather than `val`. Values happen to be unique here, but pointer keys are the general, safer pattern.
