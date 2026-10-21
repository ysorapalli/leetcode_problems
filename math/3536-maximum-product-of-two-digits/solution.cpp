// 3536. Maximum Product of Two Digits
// https://leetcode.com/problems/maximum-product-of-two-digits/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 9.4 MB (beats 7.3%)

class Solution {
public:
    int maxProduct(int n) {
        string num = to_string(n);
        int size = (int)num.size();

        sort(num.begin(), num.end());
        int a = (num[size-1]) - '0';
        int b = (num[size-2]) - '0';

        return a*b;
    }
};
