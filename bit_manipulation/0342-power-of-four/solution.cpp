// 342. Power of Four
// https://leetcode.com/problems/power-of-four/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 7.8 MB (beats 79.1%)

class Solution {
public:
    bool calc(double x){
        if(x==1) return true;
        if(x<1) return false;

        return calc(x/4);

    }
    bool isPowerOfFour(int n) {
        return calc((double) n);
    }
};
