// 94. Binary Tree Inorder Traversal
// https://leetcode.com/problems/binary-tree-inorder-traversal/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 10.8 MB (beats 66.9%)

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
    void inorder(TreeNode* curr, vector<int>& result){
        if(curr == nullptr) return;

        inorder(curr->left, result);
        result.push_back(curr->val);
        inorder(curr->right, result);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        // stack<TreeNode*> st;
        // TreeNode* curr = root;

        // while(curr || !st.empty()){
        //     while(curr){
        //         st.push(curr);
        //         curr=curr->left;
        //     }

        //     curr = st.top();
        //     st.pop();

        //     res.push_back(curr->val);

        //     curr = curr->right;
        // }

        inorder(root, res);

        return res;
    }
};
