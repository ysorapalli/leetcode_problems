// 104. Maximum Depth of Binary Tree
// https://leetcode.com/problems/maximum-depth-of-binary-tree/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 18.9 MB (beats 99.9%)

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
    int calc(TreeNode* curr, int maxVal){
        if(curr == nullptr) return maxVal;

        int left = calc(curr->left, maxVal+1);
        int right = calc(curr->right, maxVal+1);

        return max(left, right);
    }
    int maxDepth(TreeNode* root) {
        return calc(root, 0);
    }
};
