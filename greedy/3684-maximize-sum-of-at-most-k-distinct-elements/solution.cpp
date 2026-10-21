// 3684. Maximize Sum of At Most K Distinct Elements
// https://leetcode.com/problems/maximize-sum-of-at-most-k-distinct-elements/
// Difficulty: Easy | Runtime: 12 ms (beats 11.7%) | Memory: 29.2 MB (beats 39.6%)

class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int, greater<int>> s;
        int i = 0;

        vector<int> res;

        while(i<nums.size())
            s.insert(nums[i++]);

        i=0;

        for(auto it = s.begin(); it!=s.end(); ++it){
            if(i<k){
                res.push_back(*it);
                i++;
            }
            else
                break;
        }

        return res;
    }
};
