// 2094. Finding 3-Digit Even Numbers
// https://leetcode.com/problems/finding-3-digit-even-numbers/
// Difficulty: Easy | Runtime: 11 ms (beats 50.7%) | Memory: 15.3 MB (beats 13.8%)

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> freq(10,0);
        for(int d: digits) freq[d]++;

        vector<int> res;

        for(int i=100; i<1000; i+=2){
            int a = i/100;
            int b = (i/10)%10;
            int c = i%10;

            vector<int> local(10,0);
            local[a]++;
            local[b]++;
            local[c]++;

            bool flag = true;

            for(int j=0; j<10; j++){
                if(local[j]>freq[j]){
                    flag = false;
                    break;
                }
            }

            if(flag) res.push_back(i);
        }

        return res;

    }
};
