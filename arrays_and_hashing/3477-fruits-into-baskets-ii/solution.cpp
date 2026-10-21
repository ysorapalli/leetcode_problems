// 3477. Fruits Into Baskets II
// https://leetcode.com/problems/fruits-into-baskets-ii/
// Difficulty: Easy | Runtime: 5 ms (beats 21.3%) | Memory: 48.9 MB (beats 74.1%)

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = baskets.size();

        vector<bool> free(n,true);
        int left = 0;

        for(int i=0; i<n; i++){
            bool isLeft = true;
            for(int j=0; j<n; j++){
                if(free[j] && fruits[i]<=baskets[j]){
                    isLeft = false;
                    free[j] = false;
                    break;
                }
            }

            if(isLeft) left++;
        }

        return left;
    }
};
