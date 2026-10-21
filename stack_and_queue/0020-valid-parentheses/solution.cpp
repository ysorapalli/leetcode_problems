// 20. Valid Parentheses
// https://leetcode.com/problems/valid-parentheses/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 8.8 MB (beats 62.8%)

class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        int i = 0;

        stack<char> paran;

        while(i!=n){
            char ch = s[i++];

            if(ch == '(' || ch == '{' || ch == '['){
                paran.push(ch);
            }
            else{
                if(paran.empty()) return false;
                char top = paran.top();
                if(top=='('&&ch==')'
                    || top=='{'&&ch=='}'
                    || top=='['&&ch==']'){
                        paran.pop();
                    }
                else
                    return false;
            }
        }

        if(paran.empty())
            return true;
        return false;
    }
};
