// 198. House Robber
// https://leetcode.com/problems/house-robber/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 10.2 MB (beats 76.9%)

class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1 = 0, prev2 = 0;

        for(int money : nums){
            int curr = max(prev1, prev2 + money);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};
