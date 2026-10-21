// 112. Path Sum
// https://leetcode.com/problems/path-sum/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 21.5 MB (beats 33.1%)

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
    bool calc(TreeNode* curr, int target){
        if (!curr) return false;

        if (!curr->left && !curr->right) {
            return (target == curr->val);
        }

        return (calc(curr->left, target - curr->val)
            || calc(curr->right, target - curr->val)
        );
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return calc(root, targetSum);
    }
};
