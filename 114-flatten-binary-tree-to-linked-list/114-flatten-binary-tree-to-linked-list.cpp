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
    void help(TreeNode *root)
    {
        if(root==NULL || root->left==NULL && root->right==NULL)
            return;
         TreeNode*left_pointer=root->left;
        TreeNode*right_pointer=root->right;
        help(root->left);
        help(root->right);
        if(left_pointer!=NULL)
        {
            cout<<"enc";
                root->right=left_pointer;
                TreeNode*curr=root;
                 while(curr->right!=NULL){
                    curr=curr->right;
                 }
            curr->right=right_pointer;
            root->left=NULL;    
        }
        return;
    }
    void flatten(TreeNode* root) {
        help(root);
    }
};