// 39. Combination Sum
// https://leetcode.com/problems/combination-sum/
// Difficulty: Medium | Runtime: 3 ms (beats 49.9%) | Memory: 17.8 MB (beats 22.1%)

class Solution {
public:

    void calc(vector<int>& candidates, vector<vector<int>>& res, int sum, int target, vector<int>& curr, int i){
        if(i == candidates.size() || sum > target)
            return;

        if(sum == target){
            res.push_back(curr);
            return;
        }

        int num = candidates[i];
        curr.push_back(num);
        calc(candidates, res, sum+num, target, curr, i);

        curr.pop_back();
        calc(candidates, res, sum, target, curr, i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        calc(candidates, res, 0, target, curr, 0);

        return res;
    }
};
