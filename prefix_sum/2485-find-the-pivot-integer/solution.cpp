// 2485. Find the Pivot Integer
// https://leetcode.com/problems/find-the-pivot-integer/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 10.6 MB (beats 8.8%)

class Solution {
public:
    int pivotInteger(int n) {
        vector<int> sums(1001,0);
        sums[1] = 1;

        for(int i=2; i<=1000; i++){
            sums[i] = sums[i-1] + (i);
        }

        for(int i=1; i<=n; i++){
            if(sums[n] + i == 2*sums[i]) return i;
        }

        return -1;
    }
};
