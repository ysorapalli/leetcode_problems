// 200. Number of Islands
// https://leetcode.com/problems/number-of-islands/
// Difficulty: Medium | Runtime: 29 ms (beats 39.1%) | Memory: 16.3 MB (beats 76.7%)

class Solution {
public:
    // void bfs(int i, int j, int n, int m, vector<vector<char>>& grid, vector<vector<bool>>& visited){
    //     queue<pair<int,int>> q;

    //     q.push({i,j});
    //     visited[i][j] = true;

    //     int dx[4] = {-1, 1, 0, 0};
    //     int dy[4] = {0, 0, -1, 1};

    //     while(!q.empty()){
    //         auto curr = q.front();
    //         q.pop();

    //         for(int i = 0; i<4; i++){
    //             int nx = curr.first + dx[i];
    //             int ny = curr.second + dy[i];

    //             if(nx>=0 && nx<n && ny>=0 && ny<m){
    //                 if(!visited[nx][ny] && grid[nx][ny] == '1'){
    //                     visited[nx][ny] = true;
    //                     q.push({nx,ny});
    //                 }
    //             }
    //         }

    //     }
    // }
    // int numIslands(vector<vector<char>>& grid) {
    //     int n = grid.size();
    //     int m = grid[0].size();

    //     int count = 0;

    //     vector<vector<bool>> visited(n, vector<bool>(m,false));

    //     for(int i = 0; i<n; i++){
    //         for(int j = 0; j<m; j++){
    //             if(grid[i][j] == '1' && !visited[i][j]){
    //                 visited[i][j] = true;
    //                 bfs(i,j,n,m,grid,visited);
    //                 count++;
    //             }
    //         }
    //     }

    //     return count;

    // }

    void dfs(vector<vector<char>>& grid, int i, int j, int r, int c){
        if(i<0 || i>=r || j<0 || j>=c || grid[i][j] == '0')
            return;

        grid[i][j] = '0';
        dfs(grid, i-1, j, r, c);
        dfs(grid, i+1, j, r, c);
        dfs(grid, i, j-1, r, c);
        dfs(grid, i, j+1, r, c);
    }
    int numIslands(vector<vector<char>>& grid){
        int count = 0;

        int r = grid.size();
        int c = grid[0].size();

        for(int i = 0; i<r; i++){
            for(int j =0; j<c; j++){
                if(grid[i][j] == '1'){
                    dfs(grid, i, j, r, c);
                    count++;
                }
            }
        }

        return count;

    }
};
