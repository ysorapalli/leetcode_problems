// 56. Merge Intervals
// https://leetcode.com/problems/merge-intervals/
// Difficulty: Medium | Runtime: 7 ms (beats 40.7%) | Memory: 23.8 MB (beats 82.0%)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
        sort(interval.begin(), interval.end());
        int n = interval.size();
        int start = interval[0][0];
        int end = interval[0][1];
        vector<vector<int>> res;
        vector<int> curr;
        if(n==1){
            return interval;
        }
        for(int i = 0; i<n; i++){
            int start = interval[i][0];
            int end = interval[i][1];
           while(i<n-1 && end >= interval[i+1][0]){
                if(end < interval[i+1][1])
                    end = interval[i+1][1];
                i++;
           }
           curr.push_back(start);
           curr.push_back(end);
           res.push_back(curr);
           curr.clear();

        }
        return res;
    }
};
