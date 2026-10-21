// 79. Word Search
// https://leetcode.com/problems/word-search/
// Difficulty: Medium | Runtime: 919 ms (beats 7.3%) | Memory: 11.9 MB (beats 7.6%)

class Solution {
public:
    // bool exist(vector<vector<char>>& board, string word) {
    //     int nr = board.size();
    //     int nc = board[0].size();

    //     int dx[4] = {-1, 1, 0, 0};
    //     int dy[4] = {0, 0, -1, 1};

    //     vector<vector<bool>> visited(nr, vector<bool>(nc, false));

    //     queue<pair<int,int>> q;
    //     int place = 0;

    //     for(int i=0; i<nr; i++){
    //         for(int j=0; j<nc; j++){
    //             if(board[i][j] == word[place])
    //                 q.push({i,j});
    //         }
    //     }

    //     if(q.empty()) return false;

    //     while(!q.empty()){
    //         int size = q.size();
    //         place++;

    //         for(int s=0; s<size; s++){
    //             auto[x,y] = q.front();
    //             q.pop();
    //             visited[x][y] = true;

    //             for(int i=0; i<4; i++){
    //                 int nx = x + dx[i];
    //                 int ny = y + dy[i];

    //                 if(nx>=0 && nx<nr && ny>=0 && ny<nc
    //                     && board[nx][ny] == word[place]
    //                     && !visited[nx][ny]){
    //                     q.push({nx,ny});
    //                     visited[nx][ny] = true;
    //                 }
    //             }
    //         }
    //     }

    //     if(place == word.size()) return true;

    //     return false;
    // }

    bool dfs(vector<vector<char>>& board, int x, int y, string word, int place, vector<vector<bool>>& visited){
        //condition
        if(place == word.size()) return true;

        if(x<0 || x>=board.size() || y<0 || y>=board[0].size() || visited[x][y] || word[place] != board[x][y])
        return false;


        visited[x][y] = true;

        if(dfs(board, x-1, y, word, place+1, visited)) return true;
        if(dfs(board, x, y-1, word, place+1, visited)) return true;
        if(dfs(board, x+1, y, word, place+1, visited)) return true;
        if(dfs(board, x, y+1, word, place+1, visited)) return true;

        visited[x][y] = false;

        return false;
    }

    bool exist(vector<vector<char>>& board, string word){
        int nr = board.size();
        int nc = board[0].size();
        int place = 0;

        vector<vector<bool>> visited(nr, vector<bool>(nc,false));

        for(int i=0; i<nr; i++){
            for(int j=0; j<nc; j++){
                if(dfs(board, i, j, word, place, visited))
                    return true;
            }
        }

        return false;
    }
};
