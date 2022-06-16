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
     void help(TreeNode* root,int path,int &mins)
 {
     if(root->left==NULL && root->right==NULL)
     {
         mins=min(mins,path);
         cout<<mins;
         return;
     }
     if(root->left)
     {
         help(root->left,path+1,mins);
     } 
     if(root->right)
     {
        
         help(root->right,path+1,mins);
     } 
         return;
 }
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
    int mins=INT_MAX;
    int path=1;
    help(root,path,mins);
    return mins;
        
    }
};