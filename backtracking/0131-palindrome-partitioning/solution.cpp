// 131. Palindrome Partitioning
// https://leetcode.com/problems/palindrome-partitioning/
// Difficulty: Medium | Runtime: 30 ms (beats 89.3%) | Memory: 53.5 MB (beats 83.1%)

class Solution {
public:

    bool isPalin(const string& str, int l, int r){
        while(l<r){
            if(str[l++] != str[r--])
                return false;
        }

        return true;
    }
    void calc(string& s, int start, vector<string>& curr, vector<vector<string>>& res){
        if(start == s.length()){
            res.push_back(curr);
            return;
        }

        for(int end = start; end<s.length(); end++){
            if(isPalin(s,start,end)){
                curr.push_back(s.substr(start, end - start + 1));
                calc(s, end+1, curr, res);
                curr.pop_back();
            }
        }

    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> curr;
        calc(s, 0,curr, res);

        return res;

    }
};
