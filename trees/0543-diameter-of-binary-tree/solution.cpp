// 543. Diameter of Binary Tree
// https://leetcode.com/problems/diameter-of-binary-tree/
// Difficulty: Easy | Runtime: 15 ms (beats 18.2%) | Memory: 31.9 MB (beats 5.3%)

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
    int calc(TreeNode* curr, unordered_map<TreeNode*,vector<int>>& paths){
        if(curr == nullptr) return 0;

        int l=0,r=0;

        if(curr->left) {
            l = calc(curr->left, paths);
        }
        if(curr->right) {
            r = calc(curr->right,paths);
        }

        int path = max(l,r) + 1;
        paths[curr] = {l,r,l+r};

        return path;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        unordered_map<TreeNode*,vector<int>> paths;

        int x = calc(root, paths);

        int dia = 0;
        for(auto& [nodeVal, p] : paths){
            dia = max(dia, p[2]);
        }

        return dia;
    }
};
