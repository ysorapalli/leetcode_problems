// 111. Minimum Depth of Binary Tree
// https://leetcode.com/problems/minimum-depth-of-binary-tree/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 146.9 MB (beats 50.0%)

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
    int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;

        queue<TreeNode*> q;
        q.push(root);

        int dep = 1;


        while(!q.empty()){
            int size = q.size();

            for(int s = 0; s<size; s++){
                TreeNode* curr = q.front();
                q.pop();

                if(curr->left!=nullptr){
                    q.push(curr->left);
                }
                if(curr->right!=nullptr){
                    q.push(curr->right);
                }

                if(!curr->left && !curr->right)
                    return dep;
            }

            dep++;
        }

        return dep;
    }


};
