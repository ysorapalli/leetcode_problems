// 108. Convert Sorted Array to Binary Search Tree
// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
// Difficulty: Easy | Runtime: 3 ms (beats 62.3%) | Memory: 22.9 MB (beats 55.1%)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* build(vector<int>& nums, int left, int right){
        if(left > right) return nullptr;

        int mid = left + (right-left)/2;

        TreeNode* root = new TreeNode(nums[mid]);
        root->left = build(nums, left, mid-1);
        root->right = build(nums, mid+1, right);

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0, nums.size()-1);
    }
};
