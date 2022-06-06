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
    void inorder(TreeNode* &prev,TreeNode*root,int&ans)
    {
        if(root==NULL)
            return;
        inorder(prev,root->left,ans);
        if(prev!=NULL)
        {
            ans=min(root->val-prev->val,ans);
        }
            prev=root;
        inorder(prev,root->right,ans);
    }
    int getMinimumDifference(TreeNode* root) {
        TreeNode *prev=NULL;
        int ans=INT_MAX;
         inorder(prev,root,ans);
        return ans;
    }
};