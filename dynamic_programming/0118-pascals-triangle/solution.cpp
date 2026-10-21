// 118. Pascal's Triangle
// https://leetcode.com/problems/pascals-triangle/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 9.7 MB (beats 61.2%)

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> curr;
        curr.push_back(1);
        if(numRows>=1)
            res.push_back(curr);
        if(numRows>=2){
            curr.push_back(1);
            res.push_back(curr);
        }
        if(numRows>=3){
            for(int i = 3; i<=numRows; i++){
                vector<int> prev = res[i-2];
                int n = prev.size();
                vector<int> curr;
                curr.push_back(1);
                for(int j = 1; j<n; j++){
                    curr.push_back(prev[j-1] + prev[j]);
                }
                curr.push_back(1);

                res.push_back(curr);
            }
        }

        return res;
    }
};
