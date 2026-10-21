// 9. Palindrome Number
// https://leetcode.com/problems/palindrome-number/
// Difficulty: Easy | Runtime: 4 ms (beats 35.4%) | Memory: 8.4 MB (beats 91.0%)

class Solution {
public:
    bool isPalindrome(int x) {
        long y = 0;
        int temp = x;

        while(temp>0){
            y = y*10 + temp%10;
            temp /= 10;
        }

        if(x==y)
            return true;
        return false;
    }
};
