// 73. Set Matrix Zeroes
// https://leetcode.com/problems/set-matrix-zeroes/
// Difficulty: Medium | Runtime: 3 ms (beats 24.2%) | Memory: 18.7 MB (beats 100.0%)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rows;
        vector<int> cols;

        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(matrix[i][j] == 0){
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(find(rows.begin(), rows.end(), i) != rows.end() || find(cols.begin(), cols.end(), j) != cols.end())
                        matrix[i][j] = 0;
            }
        }
    }
};
