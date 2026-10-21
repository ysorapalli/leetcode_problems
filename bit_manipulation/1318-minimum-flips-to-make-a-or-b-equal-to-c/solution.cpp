// 1318. Minimum Flips to Make a OR b Equal to c
// https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/
// Difficulty: Medium | Runtime: 0 ms (beats 100.0%) | Memory: 7.9 MB (beats 6.6%)

#include <bit>

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int old = a | b;
        int maxPosition = bit_width(static_cast<unsigned int>(max(old, c))) -1;
        int minFlaps = 0;

        while(maxPosition >= 0){
            int n_o = (old >> maxPosition) & 1;
            int n_c = (c >> maxPosition) & 1;
            if(n_o != n_c){
                if(n_o == 1){
                    if((a >> maxPosition) & 1)
                        minFlaps++;
                    if((b >> maxPosition) & 1)
                        minFlaps++;
                }
                else
                    minFlaps += 1;
            }
            maxPosition--;
        }

        return minFlaps;
    }
};
