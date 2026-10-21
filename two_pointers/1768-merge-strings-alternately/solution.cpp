// 1768. Merge Strings Alternately
// https://leetcode.com/problems/merge-strings-alternately/
// Difficulty: Easy | Runtime: 1 ms (beats 47.0%) | Memory: 8.4 MB (beats 83.1%)

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1 = 0, w2 = 0;
        int len1 = word1.size(), len2 = word2.size();

        string finalstr = "";

        while(w1<len1 && w2<len2){
            finalstr += word1[w1++];
            finalstr += word2[w2++];
        }
        while(w1<len1){
            finalstr += word1[w1++];
        }
        while(w2<len2){
            finalstr += word2[w2++];
        }

        return finalstr;
    }
};
