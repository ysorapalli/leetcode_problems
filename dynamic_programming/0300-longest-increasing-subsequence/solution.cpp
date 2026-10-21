// 300. Longest Increasing Subsequence
// https://leetcode.com/problems/longest-increasing-subsequence/
// Difficulty: Medium | Runtime: 103 ms (beats 39.3%) | Memory: 14.3 MB (beats 71.4%)

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(), 1);

        int n = nums.size();

        int maxE = 1;

        for(int i = 1; i<n; i++){
            for(int j = 0; j<i; j++){
                if(nums[j] < nums[i])
                    dp[i] = max(dp[i], dp[j] + 1);
                maxE = max(maxE, dp[i]);
            }
        }

        return maxE;
    }
};
