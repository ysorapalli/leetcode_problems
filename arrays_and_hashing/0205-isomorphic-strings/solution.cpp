// 205. Isomorphic Strings
// https://leetcode.com/problems/isomorphic-strings/
// Difficulty: Easy | Runtime: 3 ms (beats 38.2%) | Memory: 9.4 MB (beats 27.7%)

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> ref;
        unordered_set<char> consumed;

        if(s.size()!=t.size())
            return false;

        int n = s.size();

        for(int i=0; i<n; i++){
            auto it = ref.find(s[i]);
            if(it != ref.end() && it->second != t[i] )
                return false;
            else if(it == ref.end()){
                if(consumed.count(t[i]))
                    return false;
                ref[s[i]] = t[i];
                consumed.insert(t[i]);
            }
        }

        return true;
    }
};
