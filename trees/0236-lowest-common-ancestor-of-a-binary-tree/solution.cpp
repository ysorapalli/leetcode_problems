// 236. Lowest Common Ancestor of a Binary Tree
// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
// Difficulty: Medium | Runtime: 8 ms (beats 100.0%) | Memory: 17.6 MB (beats 100.0%)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    // void calc(TreeNode* curr, unordered_map<TreeNode*,TreeNode*>& anc){
    //     if(curr->left){
    //         anc[curr->left] = curr;
    //         calc(curr->left, anc);
    //     }

    //     if(curr->right){
    //         anc[curr->right] = curr;
    //         calc(curr->right, anc);
    //     }
    // }
    // TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    //     unordered_map<TreeNode*,TreeNode*> anc;
    //     TreeNode* res;

    //     unordered_set<TreeNode*> parents;
    //     parents.insert(p);

    //     calc(root,anc);

    //     while(p){
    //         parents.insert(anc[p]);
    //         p = anc[p];
    //     }

    //     while(q){
    //         if(parents.count(q)) return q;
    //         q = anc[q];
    //     }

    //     return nullptr;

    // }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==p || root==q || root==nullptr) return root;

        TreeNode* l = lowestCommonAncestor(root->left, p, q);
        TreeNode* r = lowestCommonAncestor(root->right, p, q);

        if(l && r) return root;

        return l? l:r;
    }
};
