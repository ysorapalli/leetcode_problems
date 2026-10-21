// 994. Rotting Oranges
// https://leetcode.com/problems/rotting-oranges/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 17 MB (beats 37.9%)

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        vector<vector<bool>> visited(r, vector<bool>(c, false));
        queue<pair<int, int>> q;
        int fresh = 0;

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(grid[i][j] == 2) {
                    q.push({i, j});
                    visited[i][j] = true;
                }
                else if(grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        int minutes = 0;
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};

        while(!q.empty() && fresh > 0) {
            int size = q.size();
            for(int i = 0; i < size; i++) {
                auto [x, y] = q.front(); q.pop();

                for(int d = 0; d < 4; d++) {
                    int nx = x + dx[d];
                    int ny = y + dy[d];

                    if(nx >= 0 && nx < r && ny >= 0 && ny < c &&
                       !visited[nx][ny] && grid[nx][ny] == 1) {
                        grid[nx][ny] = 2;
                        visited[nx][ny] = true;
                        q.push({nx, ny});
                        fresh--;
                    }
                }
            }
            minutes++;
        }

        return (fresh == 0) ? minutes : -1;
    }
};
