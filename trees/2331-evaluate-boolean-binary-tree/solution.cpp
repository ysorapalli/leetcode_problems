// 2331. Evaluate Boolean Binary Tree
// https://leetcode.com/problems/evaluate-boolean-binary-tree/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 24.2 MB (beats 83.6%)

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
    bool evaluateTree(TreeNode* root) {
        if(root->left==nullptr && root->right==nullptr) return (bool)root->val;

        int op = root->val;
        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);

        if(op==2) return left || right;
        return left && right;
    }
};
