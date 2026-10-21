// 875. Koko Eating Bananas
// https://leetcode.com/problems/koko-eating-bananas/
// Difficulty: Medium | Runtime: 10 ms (beats 37.7%) | Memory: 39.5 MB (beats 5.7%)

class Solution {
public:
    bool canFinish(vector<int>& piles, int h, long long idx){
        long long hours = 0;
        int n = piles.size();
        vector<int> p = piles;

        for(int pile: piles){
            hours += ceil(static_cast<double>(pile)/idx);
        }

        return ((int)(hours)<=h);
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        //range is 1 to h; find min of k

        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while(left<right){
            long long mid = left + (right-left)/2;

            if(canFinish(piles, h, mid)) {
                right = mid;
            }
            else{
                left = mid + 1;
            }
        }

        return right;

    }
};
