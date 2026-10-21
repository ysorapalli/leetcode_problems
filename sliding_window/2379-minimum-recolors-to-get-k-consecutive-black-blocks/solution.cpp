// 2379. Minimum Recolors to Get K Consecutive Black Blocks
// https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 8.4 MB (beats 60.0%)

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int left = 0;
        int right = 0;
        int current = 0;
        int maxBlack = current;

        while(right<k){
            if(blocks[right++]=='B') current++;
            maxBlack = max(maxBlack, current);
        }

        if(current == k) return 0;

        while(right<blocks.size()){
            current = current - (blocks[left++]=='B'?1:0) + (blocks[right++]=='B'?1:0);
            if(current==k)
                return 0;
            maxBlack = max(maxBlack, current);
        }

        return k-maxBlack;

    }
};
