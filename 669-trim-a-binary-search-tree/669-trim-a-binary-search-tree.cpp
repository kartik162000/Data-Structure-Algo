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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(!root) return root;
        if(root->left)
            root->left=trimBST(root->left,low,high);
        if(root->right)
            root->right=trimBST(root->right,low,high);
        if(low<=root->val && root->val<=high)
            return root;
        if(!root->left) return root->right;
        else if(!root->right) return root->left;
        return NULL;
    }
};