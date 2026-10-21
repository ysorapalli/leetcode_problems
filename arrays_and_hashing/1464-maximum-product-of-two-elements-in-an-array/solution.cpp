// 1464. Maximum Product of Two Elements in an Array
// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 13.4 MB (beats 93.9%)

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        return ((nums[n-1]-1) * (nums[n-2]-1));
    }
};
