// 2358. Maximum Number of Groups Entering a Competition
// https://leetcode.com/problems/maximum-number-of-groups-entering-a-competition/
// Difficulty: Medium | Runtime: 27 ms (beats 11.5%) | Memory: 60.3 MB (beats 56.8%)

class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        sort(grades.begin(), grades.end());

        int n = grades.size();
        int groups = 0;
        int x = 1;

        for(int i=0; i<n; i+=x){
            groups++;
            x=x+1;
        }

        return groups;
    }
};
