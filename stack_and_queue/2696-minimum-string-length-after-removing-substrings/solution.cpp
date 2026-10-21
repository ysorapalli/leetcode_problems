// 2696. Minimum String Length After Removing Substrings
// https://leetcode.com/problems/minimum-string-length-after-removing-substrings/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 11.6 MB (beats 56.7%)

class Solution {
public:
    int minLength(string s) {
        stack<char> stk;
        int size = (int)s.size();

        for(int i=0; i<size; i++){
            char curr = s[i];
            if(stk.size()>0){
                char top = stk.top();
                if(top=='A' && curr=='B' || top=='C' && curr=='D'){
                    stk.pop();
                    continue;
                }
            }
            stk.push(curr);
        }

        return stk.size();
    }
};
