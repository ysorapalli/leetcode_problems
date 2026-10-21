// 167. Two Sum II - Input Array Is Sorted
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 19.5 MB (beats 75.3%)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        int left = 0;
        int right = n-1;

        while(left < right){
            int sum = numbers[left] + numbers[right];
            if(sum == target)
                return {left+1, right+1};
            else if(sum < target)
                left++;
            else
                right--;
        }
        return {};
    }
};
