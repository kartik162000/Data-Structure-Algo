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
    bool solve(TreeNode*root, long mins,long maxs)
    {
        if(!root) return true;
   if(root->val <= mins || root->val >= maxs)
        return false;
    return solve(root->left,mins,root->val) && solve(root->right,root->val,maxs);
    }
     long mins= LLONG_MIN, maxs= LLONG_MAX;
    bool isValidBST(TreeNode* root) {
        return solve(root,mins,maxs);
 }
};