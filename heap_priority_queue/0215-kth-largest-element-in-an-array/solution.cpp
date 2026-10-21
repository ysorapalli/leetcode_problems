// 215. Kth Largest Element in an Array
// https://leetcode.com/problems/kth-largest-element-in-an-array/
// Difficulty: Medium | Runtime: 35 ms (beats 59.6%) | Memory: 61.5 MB (beats 100.0%)

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(int n: nums){
            minHeap.push(n);
            if(minHeap.size() > k)
                minHeap.pop();
        }
        return minHeap.top();
    }
};
