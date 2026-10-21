// 349. Intersection of Two Arrays
// https://leetcode.com/problems/intersection-of-two-arrays/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 14.7 MB (beats 14.6%)

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1;
        set<int> set2;
        vector<int> res;

        for(int n1: nums1)
            set1.insert(n1);
        for(int n2: nums2)
            set2.insert(n2);

        int s1 = set1.size();
        int s2 = set2.size();

        if (set1.size() <= set2.size()) {
            for (int n : set1) {
                if (set2.count(n)) {
                    res.push_back(n);
                }
            }
        } else {
            for (int n : set2) {
                if (set1.count(n)) {
                    res.push_back(n);
                }
            }
        }


        return res;
    }
};
