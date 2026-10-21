// 226. Invert Binary Tree
// https://leetcode.com/problems/invert-binary-tree/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 12.6 MB (beats 24.7%)

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
    void preOrder(TreeNode* root){
        if(root == NULL) return;

        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        preOrder(root->left);
        preOrder(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        preOrder(root);

        return root;
    }
};
