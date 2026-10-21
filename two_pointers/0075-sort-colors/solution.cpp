// 75. Sort Colors
// https://leetcode.com/problems/sort-colors/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 11.7 MB (beats 11.9%)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(3,0);
        for(int i =0; i<n; i++){
            freq[nums[i]]++;
        }
        for(int i =0; i<n; i++){
            if(freq[0] > i)
                nums[i] = 0;
            else if(freq[0] + freq[1] > i)
                nums[i] = 1;
            else if(freq[0] + freq[1] + freq[2] > i)
                nums[i] = 2;
        }
    }
};
