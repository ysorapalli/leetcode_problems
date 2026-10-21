// 3043. Find the Length of the Longest Common Prefix
// https://leetcode.com/problems/find-the-length-of-the-longest-common-prefix/
// Difficulty: Medium | Runtime: 115 ms (beats 97.8%) | Memory: 134.8 MB (beats 99.0%)

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> prefixs;

        for(int n: arr1){
            while(!prefixs.count(n) && n>0){
                prefixs.insert(n);
                n/=10;
            }
        }

        int longestPrefix = 0;

        for(int n: arr2){
            while(!prefixs.count(n) && n>0){
                n/=10;
            }
            if(n>0){
                longestPrefix = max(longestPrefix, static_cast<int>(log10(n) + 1));
            }
        }

        return longestPrefix;
    }
};
