// 88. Merge Sorted Array
// https://leetcode.com/problems/merge-sorted-array/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 12.2 MB (beats 99.0%)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;

        int i1 = 0;
        int i2 = 0;
        while(i1<m && i2<n){
            if(nums1[i1] <= nums2[i2])
                res.push_back(nums1[i1++]);
            else if(nums2[i2] < nums1[i1])
                res.push_back(nums2[i2++]);
        }
        while(i1<m){
            res.push_back(nums1[i1++]);
        }
        while(i2<n){
            res.push_back(nums2[i2++]);
        }

        nums1 = res;
    }
};
