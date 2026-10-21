// 278. First Bad Version
// https://leetcode.com/problems/first-bad-version/
// Difficulty: Easy | Runtime: 3 ms (beats 15.8%) | Memory: 7.9 MB (beats 41.1%)

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 0;
        int right = n-1;
        int idx = n;

        while(left<=right){
            int mid = left + (right - left)/2;

            if(isBadVersion(mid))
                right = mid - 1;
            else if(!isBadVersion(mid)){
                left = mid + 1;
                idx = mid;
            }
        }

        return idx+1;
    }
};
