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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return false;
        bool ans=0;
        if(root->val==targetSum && root->left==NULL && root->right==NULL)
            return 1;
        bool node1=hasPathSum(root->left,targetSum-root->val);
        bool node2=hasPathSum(root->right,targetSum-root->val);
        return node1 || node2;
    }
};