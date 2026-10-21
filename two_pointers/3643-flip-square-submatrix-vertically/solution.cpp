// 3643. Flip Square Submatrix Vertically
// https://leetcode.com/problems/flip-square-submatrix-vertically/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 34 MB (beats 4.4%)

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int rows = grid.size();
        int cols = grid[0].size();

        int top = x;
        int bottom = x+k-1;

        while(top<bottom){
            for(int j=0+y; j<y+k; j++){
                swap(grid[top][j], grid[bottom][j]);
            }
            top++;
            bottom--;
        }

        return grid;
    }
};
