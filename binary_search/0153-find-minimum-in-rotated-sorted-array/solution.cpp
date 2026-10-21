// 153. Find Minimum in Rotated Sorted Array
// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 14.2 MB (beats 10.8%)

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;

        int minNum = INT_MAX;

        while(left<=right){
            int mid = (left+right)/2;
            minNum = min(minNum, nums[mid]);

            if(nums[left]<nums[right]){
                if(nums[left]<nums[mid] && nums[mid]>=nums[right]){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
            else{
                if(nums[left]>=nums[mid] && nums[mid]<nums[right]){
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }

        }

        return minNum;
    }
};
