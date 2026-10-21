// 53. Maximum Subarray
// https://leetcode.com/problems/maximum-subarray/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 71.8 MB (beats 14.8%)

class Solution {
#include <climits>
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currSum = nums[0];

        for(int i = 1; i<nums.size(); ++i){
            currSum = max(nums[i], currSum + nums[i]);
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
};
