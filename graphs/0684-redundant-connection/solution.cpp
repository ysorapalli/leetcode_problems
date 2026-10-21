// 684. Redundant Connection
// https://leetcode.com/problems/redundant-connection/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 13 MB (beats 86.3%)

class Solution {
public:
    int findParent(int i, vector<int>& parent){
        if(parent[i] != i)
            parent[i] = findParent(parent[i], parent);
        return parent[i];
    }

    bool checkCycle(int u, int v, vector<int>& parent){
        int pu = findParent(u, parent);
        int pv = findParent(v, parent);
        if(pu == pv) return false;

        parent[pu] = pv;
        return true;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> parent(n+1, 0);

        for(int i=1; i<=n; i++) parent[i] = i;

        for(vector<int> edge: edges){
            if(!checkCycle(edge[0], edge[1], parent))
                return edge;
        }
        return {};
    }
};
