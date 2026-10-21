// 542. 01 Matrix
// https://leetcode.com/problems/01-matrix/
// Difficulty: Medium | Runtime: 15 ms (beats 71.5%) | Memory: 36.7 MB (beats 47.2%)

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {

        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};

        int nr = mat.size();
        int nc = mat[0].size();

        vector<vector<int>> res(nr, vector<int>(nc,-1));

        vector<vector<bool>> visited(nr, vector<bool>(nc,false));

        queue<pair<int,int>> q;


        for(int i=0; i<nr; i++){
            for(int j=0; j<nc; j++){
                if(mat[i][j] == 0){
                    q.push({i,j});
                    res[i][j] = 0;
                }
            }
        }

        while(!q.empty()){
            auto [x, y] = q.front();
            q.pop();

            for(int a=0; a<4; a++){
                int nx = x + dx[a];
                int ny = y + dy[a];

                if (nx >= 0 && nx < nr && ny >= 0 && ny < nc && res[nx][ny] == -1) {
                    res[nx][ny] = res[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }

        return res;
    }
};
