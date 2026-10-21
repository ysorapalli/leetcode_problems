// 2390. Removing Stars From a String
// https://leetcode.com/problems/removing-stars-from-a-string/
// Difficulty: Medium | Runtime: 20 ms (beats 51.2%) | Memory: 29.7 MB (beats 43.8%)

class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;
        string snew = "";
        for (char ch: s){
            if(ch != '*'){
                stk.push(ch);
            }
            else{
                if(!stk.empty()){
                    stk.pop();
                }
                else{
                    return "invalid";
                }
            }
        }
        while(!stk.empty()){
            snew += stk.top();
            stk.pop();
        }

        reverse(snew.begin(), snew.end());
        return snew;
    }
};
