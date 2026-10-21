// 62. Unique Paths
// https://leetcode.com/problems/unique-paths/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 9.1 MB (beats 68.9%)

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(n, vector<int>(m, 0));
        dp[0][0] = 1;

        for (int x = 0; x < n; ++x) {
            for (int y = 0; y < m; ++y) {
                if (x > 0)
                    dp[x][y] += dp[x - 1][y];
                if (y > 0)
                    dp[x][y] += dp[x][y - 1];
            }
        }

        return dp[n - 1][m - 1];
    }
};
