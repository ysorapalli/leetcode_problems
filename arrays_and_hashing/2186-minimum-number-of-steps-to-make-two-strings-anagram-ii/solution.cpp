// 2186. Minimum Number of Steps to Make Two Strings Anagram II
// https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii/
// Difficulty: Medium | Runtime: 17 ms (beats 39.8%) | Memory: 31.7 MB (beats 92.7%)

class Solution {
public:
    // int minSteps(string s, string t) {
    //     unordered_map<char,int> freqs;
    //     unordered_map<char,int> freqt;
    //     int minSteps = 0;
    //     for(char ch: s){
    //         auto it = freqs.find(ch);
    //         if(it != freqs.end()){
    //             freqs[ch] += 1;
    //         }
    //         else{
    //             freqs[ch] = 1;
    //         }
    //     }

    //     for(char ch: t){
    //         auto it = freqt.find(ch);
    //         if(it != freqt.end()){
    //             freqt[ch] += 1;
    //         }
    //         else{
    //             freqt[ch] = 1;
    //         }
    //     }

    //     for(char ch: t){
    //         auto its = freqs.find(ch);
    //         if(its != freqs.end()){
    //             minSteps += abs(freqs[ch]-freqt[ch]);
    //             freqs[ch] = freqt[ch];
    //         }
    //         else
    //             minSteps += 1;
    //     }

    //     for(char ch: s){
    //         auto itt = freqt.find(ch);
    //         if(itt == freqt.end())
    //             minSteps += 1;
    //     }

    //     return minSteps;

    // }

    int minSteps(string s, string t){
        vector<int> freqs(26,0);
        vector<int> freqt(26,0);

        int ns = s.size();
        int nt = t.size();

        for(int i=0; i<ns; i++){
            freqs[s[i] - 'a']++;
        }

        for(int i=0; i<nt; i++){
            freqt[t[i] - 'a']++;
        }

        int minCount = 0;

        for(int i=0; i<26; i++){
            minCount += abs(freqs[i]-freqt[i]);
        }

        return minCount;
    }
};
