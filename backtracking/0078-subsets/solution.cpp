// 78. Subsets
// https://leetcode.com/problems/subsets/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 9.9 MB (beats 59.8%)

class Solution {
public:
    void dfs(int index, vector<int>& nums, vector<int>& path, vector<vector<int>>& res) {
        res.push_back(path);

        for (int i = index; i < nums.size(); i++) {
            path.push_back(nums[i]);
            dfs(i + 1, nums, path, res);
            path.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        dfs(0, nums, path, res);
        return res;
    }
};
