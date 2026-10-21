// 1608. Special Array With X Elements Greater Than or Equal X
// https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 11.1 MB (beats 88.2%)

class Solution {
public:
    int indexOfK(vector<int>& nums, int k){
        int n = nums.size();
        int idx = -1;
        int left = 0;
        int right = n-1;
        bool flag = false;

        while(left<=right){
            int mid = left + (right-left)/2;

            if(nums[mid]>=k){
                right = mid - 1;
                idx = mid;
            }
            else if(nums[mid]<k){
                left = mid + 1;

            }
        }

        return n - idx;
    }
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        for(int i=1; i<=n; i++){
            int x = indexOfK(nums,i);
            if(i == x)
                return x;
        }

        return -1;

    }
};
