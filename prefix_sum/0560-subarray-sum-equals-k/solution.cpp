// 560. Subarray Sum Equals K
// https://leetcode.com/problems/subarray-sum-equals-k/
// Difficulty: Medium | Runtime: 32 ms (beats 92.1%) | Memory: 45.5 MB (beats 38.6%)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int maxArrays = 0;

        unordered_map<int,int> prefixSum;
        prefixSum[0] = 1;

        for(int num: nums){
            sum += num;
            if(prefixSum.find(sum - k) != prefixSum.end())
                maxArrays += prefixSum[sum - k];
            prefixSum[sum]++;
        }

        return maxArrays;
    }
};
