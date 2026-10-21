// 2529. Maximum Count of Positive Integer and Negative Integer
// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 21.5 MB (beats 23.7%)

class Solution {
public:
    int lowerBound(vector<int>& nums){
        int left = 0, right = nums.size()-1;
        int size = nums.size();
        int idx = size;

        while(left<=right){
            int mid = (left+right)/2;

            if(nums[mid]>=0){
                right = mid-1;
                idx = mid;
            }
            else if(nums[mid]<0)
                left = mid+1;

        }
        return idx;
    }

    int upperBound(vector<int>& nums){
        int left = 0, right = nums.size()-1;
        int size = nums.size();
        int idx = size;

        while(left<=right){
            int mid = (left+right)/2;

            if(nums[mid]<=0){
                left = mid+1;
            }
            else if(nums[mid]>0){
                right = mid-1;
                idx = mid;
            }
        }

        return idx;
    }
    int maximumCount(vector<int>& nums) {
        int positiveCount = nums.size() - upperBound(nums);
        int negativeCount = lowerBound(nums);

        return max(positiveCount, negativeCount);
    }
};
