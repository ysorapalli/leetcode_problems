// 81. Search in Rotated Sorted Array II
// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 18.1 MB (beats 7.8%)

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();

        int left = 0;
        int right = n-1;

        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target) return true;

            if(nums[left]==nums[mid] && nums[right]==nums[mid]){
                left++;
                right--;
            }
            else if(nums[left]<=nums[mid]){
                if(nums[left]<=target && nums[mid]>target)
                    right = mid - 1;
                else
                    left = mid + 1;
            }
            else{
                if(nums[mid]<target && nums[right]>=target)
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }

        return false;
    }
};
