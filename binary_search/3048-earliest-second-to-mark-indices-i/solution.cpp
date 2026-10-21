// 3048. Earliest Second to Mark Indices I
// https://leetcode.com/problems/earliest-second-to-mark-indices-i/
// Difficulty: Medium | Runtime: 23 ms (beats 33.3%) | Memory: 48.9 MB (beats 33.3%)

class Solution {
public:
    bool isAllMarked(vector<int>& nums, vector<int>& changeIndices, int mid){
        unordered_map<int,int> last;
        for(int i=0; i<mid; i++){
            last[changeIndices[i]] = i;
        }

        if(last.size()!=nums.size()) return false;
        int count = 0;

        for(int i=0; i<mid; i++){
            int idx = changeIndices[i];

            if(i == last[idx]){
                if(count < nums[idx-1]) return false;
                else count -= nums[idx-1];
            }
            else {
                count++;
            }
        }

        return true;
    }

    int earliestSecondToMarkIndices(vector<int>& nums, vector<int>& changeIndices) {
        int n = nums.size();
        int m = changeIndices.size();

        int left = 0;
        int right = m+1;

        while(left<right){
            int mid = (left+right)/2;
            if(isAllMarked(nums, changeIndices, mid)){
                right = mid;
            }
            else{
                left = mid + 1;
            }
        }

        if(right==m+1) return -1;
        else return right;
    }
};
