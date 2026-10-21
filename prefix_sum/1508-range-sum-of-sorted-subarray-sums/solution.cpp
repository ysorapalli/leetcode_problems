// 1508. Range Sum of Sorted Subarray Sums
// https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/
// Difficulty: Medium | Runtime: 97 ms (beats 24.5%) | Memory: 27.2 MB (beats 22.3%)

class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int MOD = 1e9 + 7;
        vector<int> sums;

        if(n==0) return 0;

        for(int i=0; i<n; i++){
            int prefix = 0;
            for(int j=i; j<n; j++){
                prefix += nums[j];
                sums.push_back(prefix);
            }
        }

        sort(sums.begin(), sums.end());

        long long total = 0;

        for(int i=left-1; i<right; i++){
            total = (total + sums[i])%MOD;
        }

        return total;
    }
};
