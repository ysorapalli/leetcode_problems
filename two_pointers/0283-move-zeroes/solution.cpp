// 283. Move Zeroes
// https://leetcode.com/problems/move-zeroes/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 23.7 MB (beats 81.7%)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zerop = 0, curr = 0;
        int len = nums.size();

        if(len == 1) return;

        while(curr < len){
            if(nums[curr] != 0){
                if(zerop == curr){
                    zerop++;
                }
                else{
                    nums[zerop] = nums[curr];
                    zerop++;
                    nums[curr] = 0;
                }
            }
            curr++;
        }
    }
};
