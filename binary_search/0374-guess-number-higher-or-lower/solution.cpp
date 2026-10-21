// 374. Guess Number Higher or Lower
// https://leetcode.com/problems/guess-number-higher-or-lower/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 7.9 MB (beats 42.5%)

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 1;
        int right = n;

        while(left<=right){
            int mid = left + (right-left)/2;
            int res = guess(mid);

            if(res>0) left = mid + 1;
            else if(res<0) right = mid - 1;
            else return mid;
        }

        return -1;
    }
};
