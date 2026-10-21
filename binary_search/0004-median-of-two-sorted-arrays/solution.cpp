// 4. Median of Two Sorted Arrays
// https://leetcode.com/problems/median-of-two-sorted-arrays/
// Difficulty: Hard | Runtime: 2 ms (beats 32.6%) | Memory: 95.8 MB (beats 23.2%)

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        nums1.insert(nums1.end(),nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());

        int left = 0;
        n = nums1.size();
        int right = n-1;

        if(n%2 == 0){
            return (nums1[(n/2)-1] + nums1[n/2])/2.0;
        }
        return nums1[n/2];
    }
};
