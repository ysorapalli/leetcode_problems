// 1422. Maximum Score After Splitting a String
// https://leetcode.com/problems/maximum-score-after-splitting-a-string/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 9.6 MB (beats 9.8%)

class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int maxScore = 0;
        vector<int> zeros(n,0);
        vector<int> ones(n,0);

        if(s[0]=='0') zeros[0] = 1;
        if(s[n-1]=='1') ones[n-1] = 1;

        if(n==2) return zeros[0]+ones[1];

        for(int i=1; i<n; i++){
            if(s[i]=='0') zeros[i] = zeros[i-1] + 1;
            else zeros[i] = zeros[i-1];

            if(s[n-i-1]=='1') ones[n-i-1] = ones[n-i] + 1;
            else ones[n-i-1] = ones[n-i];
        }

        for(int i=1; i<n-1; i++){
            maxScore = max(maxScore, zeros[i]+ones[i]);
        }

        return maxScore;
    }
};
