// 671. Second Minimum Node In a Binary Tree
// https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 9.3 MB (beats 47.4%)

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
    set<int> vals;
    void preOrder(TreeNode* root){
        if(root == NULL) return;

        vals.insert(root->val);
        preOrder(root->left);
        preOrder(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        preOrder(root);

        if(vals.size()>1){
            int smallest = *vals.begin();
            vals.erase(smallest);
            return *vals.begin();
        }

        return -1;
    }
};
