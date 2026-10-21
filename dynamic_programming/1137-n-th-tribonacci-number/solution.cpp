// 1137. N-th Tribonacci Number
// https://leetcode.com/problems/n-th-tribonacci-number/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 8 MB (beats 46.6%)

class Solution {
public:
    int tribonacci(int n) {
        int vals[38] = {0};
        vals[0] = 0;
        vals[1] = 1;
        vals[2] = 1;
        for(int i=3; i<=n; i++){
            vals[i] = vals[i-1] + vals[i-2] + vals[i-3];
        }
        return vals[n];
    }
};
