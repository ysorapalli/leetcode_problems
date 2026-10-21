// 496. Next Greater Element I
// https://leetcode.com/problems/next-greater-element-i/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 12.9 MB (beats 15.0%)

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> great;
        unordered_map<int,int> nextGreat;
        vector<int> res;

        for(int i = nums2.size()-1; i>=0; i--){
            int n2 = nums2[i];

            while(!great.empty() && great.top()<=n2)
                great.pop();

            nextGreat.insert({n2,(great.empty())? -1:great.top()});
            great.push(n2);

        }

        for(int n1: nums1){
            res.push_back(nextGreat[n1]);
        }

        return res;
    }
};
