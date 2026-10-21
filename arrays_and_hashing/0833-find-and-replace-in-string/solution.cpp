// 833. Find And Replace in String
// https://leetcode.com/problems/find-and-replace-in-string/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 14.3 MB (beats 32.3%)

class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        map<int, pair<string,string>>  replace;
        int n = indices.size();
        int i = 0;
        while(i<n){
            int len = sources[i].size();
            if(s.substr(indices[i],len) == sources[i]){
                replace[indices[i]]={sources[i], targets[i]};
            }
            i++;
        }

        string result = "";
        int start = 0;

        while(start<s.size()){
            if(replace.find(start) != replace.end()){
                result+=replace[start].second;
                start += replace[start].first.size();
            }
            else{
                result+=s[start];
                start++;
            }
        }

        return result;

    }
};
