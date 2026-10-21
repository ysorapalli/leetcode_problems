// 3. Longest Substring Without Repeating Characters
// https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Difficulty: Medium | Runtime: 21 ms (beats 72.8%) | Memory: 16.9 MB (beats 99.8%)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        int left = 0;
        int right = 0;

        set<int> freq;
        int i =0;
        while(i<s.length()){
            if(freq.count(s[i]) == 0){
                freq.insert(s[i]);
                right++;
                i++;
            }
            else{
                maxLength = max(maxLength , right-left);
                freq.erase(s[left]);
                left++;
            }
        }

        return max(maxLength, right-left);
    }
};
