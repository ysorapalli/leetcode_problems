// 169. Majority Element
// https://leetcode.com/problems/majority-element/
// Difficulty: Easy | Runtime: 4 ms (beats 23.2%) | Memory: 28 MB (beats 99.9%)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};
