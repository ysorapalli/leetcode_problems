// 70. Climbing Stairs
// https://leetcode.com/problems/climbing-stairs/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 7.9 MB (beats 71.1%)

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) return 1;

        int prev2 = 1, prev1 = 1, curr;
        for (int i = 2; i <= n; ++i) {
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;
    }
};
