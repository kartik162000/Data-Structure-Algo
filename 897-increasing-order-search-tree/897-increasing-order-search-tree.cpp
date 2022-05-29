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
    TreeNode *nn=new TreeNode(-1);
public:
    void help(TreeNode*root)
    {
        if(root==NULL)
            return;
        help(root->left);
        cout<<"adding: "<<root->val<<"\n";
        root->left=NULL;
        nn->right=root;
        nn=root;
       help(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
    TreeNode *f=nn;
    help(root);
        return f->right;
    }
};