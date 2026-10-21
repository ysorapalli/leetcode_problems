// 100. Same Tree
// https://leetcode.com/problems/same-tree/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 12.8 MB (beats 45.6%)

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
    bool preOrder(TreeNode* p, TreeNode* q){
        if(p == nullptr){
            if(q == nullptr) return true;
            return false;
        }
        if(q == nullptr) return false;

        if(p->val != q->val) return false;
        return (preOrder(p->left, q->left) && preOrder(p->right, q->right));
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return preOrder(p, q);
    }
};
