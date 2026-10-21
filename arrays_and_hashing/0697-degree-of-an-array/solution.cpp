// 697. Degree of an Array
// https://leetcode.com/problems/degree-of-an-array/
// Difficulty: Easy | Runtime: 10 ms (beats 68.9%) | Memory: 30 MB (beats 46.5%)

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int,int> left;
        unordered_map<int,int> right;
        unordered_map<int,int> count;
        int maxCount = 1;

        for(int i=0 ; i<size; i++){
            if(count.find(nums[i])==count.end()){
                left[nums[i]] = i;
            }
            right[nums[i]] = i;
            count[nums[i]]++;
            maxCount = max(maxCount , count[nums[i]]);
        }

        int minLen = size+1;
        if(maxCount==1) return 1;

        for(auto it: count){
            if(it.second == maxCount)
                minLen = min(minLen, right[it.first] - left[it.first] + 1);
        }

        return minLen;
    }
};
