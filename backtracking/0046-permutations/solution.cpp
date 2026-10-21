// 46. Permutations
// https://leetcode.com/problems/permutations/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 10.6 MB (beats 69.2%)

class Solution {
public:

    void calc(vector<int>& nums, vector<bool>& used, vector<vector<int>>& res, vector<int>& curr){
        //base
        if(curr.size() == nums.size()){
            res.push_back(curr);
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if(used[i]) continue;

            curr.push_back(nums[i]);
            used[i] = true;

            calc(nums, used, res, curr);

            curr.pop_back();
            used[i] = false;
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<bool> used(nums.size(), false);
        int n = nums.size();
        vector<int> curr;
        calc(nums, used, res, curr);

        return res;
    }
};
