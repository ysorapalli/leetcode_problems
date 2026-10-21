// 74. Search a 2D Matrix
// https://leetcode.com/problems/search-a-2d-matrix/
// Difficulty: Medium | Runtime: 2 ms (beats 1.3%) | Memory: 13.2 MB (beats 77.3%)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int total = m*n;

        int left = 1;
        int right = total;

        while(left<=right){
            int mid = (left+right)/2;

            int i = (mid-1)/n;
            int j = (mid-1)%n;

            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] < target){
                left = (i*n + j + 1) + 1;
            }
            else
                right = (i*n + j + 1) - 1;
        }

        return false;
    }
};
