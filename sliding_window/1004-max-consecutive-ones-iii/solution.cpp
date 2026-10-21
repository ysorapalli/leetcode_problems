// 1004. Max Consecutive Ones III
// https://leetcode.com/problems/max-consecutive-ones-iii/
// Difficulty: Medium | Runtime: 1 ms (beats 45.6%) | Memory: 79.4 MB (beats 7.6%)

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int len = nums.size();
        int maxOnes = 0;
        int tempk = 0;

        while(right < len){
            if(nums[right] == 1) right++;
            else{
                if(tempk<k){
                    right++;
                    tempk++;
                }
                else{
                    maxOnes = max(maxOnes, right - left);
                    if(nums[left] == 0) tempk--;
                    left++;
                }
            }
        }
        maxOnes = max(maxOnes, right - left);
        return maxOnes;
    }
};
