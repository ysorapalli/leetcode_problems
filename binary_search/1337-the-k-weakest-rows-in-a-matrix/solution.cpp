// 1337. The K Weakest Rows in a Matrix
// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 14.4 MB (beats 69.1%)

class Solution {
public:
    int findLastSoldier(vector<int>& row){
        int n = row.size();
        int l = 0, r = n-1;
        int idx = -1;

        while(l<=r){
            int m = l + (r-l)/2;

            if(row[m]==0)
                r = m-1;
            else if(row[m]==1){
                l = m+1;
                idx = m;
            }
        }

        return idx;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();

        vector<pair<int,int>> soldiers;
        vector<int> res;

        for(int i=0; i<m; i++){
            soldiers.push_back({findLastSoldier(mat[i])+1, i});
        }

        sort(soldiers.begin(), soldiers.end());
        int i = 0;

        while(i!=k){
            res.push_back(soldiers[i++].second);
        }

        return res;

    }
};
