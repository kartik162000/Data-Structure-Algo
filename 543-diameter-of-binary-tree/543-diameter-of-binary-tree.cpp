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
    int height(TreeNode*root)
    {
        if(root==NULL)
            return 0;
        int lft=height(root->left);
        int rt=height(root->right);
        return 1+max(lft,rt);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        int root_d=height(root->left)+height(root->right);
        int left_d=diameterOfBinaryTree(root->left);
        int right_d=diameterOfBinaryTree(root->right);
        return max(root_d,max(left_d,right_d));
    }
};