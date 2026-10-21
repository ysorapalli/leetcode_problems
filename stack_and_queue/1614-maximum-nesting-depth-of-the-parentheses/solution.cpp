// 1614. Maximum Nesting Depth of the Parentheses
// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 8.7 MB (beats 9.0%)

class Solution {
public:
    int maxDepth(string s) {
        stack<char> stk;
        int size = (int)s.size();
        int maxDepth = 0;

        for(int i=0 ; i<size; i++){
            if(s[i]=='(') {
                stk.push('(');
            }
            else if(s[i]==')'){
                stk.pop();
            }

            maxDepth=max((int)stk.size(),maxDepth);
        }

        return maxDepth;
    }
};
