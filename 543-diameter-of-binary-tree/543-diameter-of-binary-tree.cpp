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
    int res=0;
    int help(TreeNode* root)
    {
        if(!root) return 0;
        int lft_ht=help(root->left);
        int rt_ht=help(root->right);
        res=max(res,lft_ht+rt_ht);
        return 1+max(lft_ht,rt_ht);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int h=help(root);
        return res;
    }
};