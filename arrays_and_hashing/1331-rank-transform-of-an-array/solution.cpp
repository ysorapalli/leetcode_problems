// 1331. Rank Transform of an Array
// https://leetcode.com/problems/rank-transform-of-an-array/
// Difficulty: Easy | Runtime: 85 ms (beats 9.1%) | Memory: 44.2 MB (beats 43.9%)

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> order;
        vector<int> sortedArr(arr);
        sort(sortedArr.begin(), sortedArr.end());
        int rank = 1;
        int size = arr.size();

        for(int i=0; i<size; i++){
            if(i>0 && sortedArr[i]>sortedArr[i-1])
                rank++;
            order[sortedArr[i]] = rank;
        }

        for(int i=0 ;i<size; i++){
            arr[i] = order[arr[i]];
        }

        return arr;
    }
};
