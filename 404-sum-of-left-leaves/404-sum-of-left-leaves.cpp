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
    int sum=0;
    void help(TreeNode* root,bool isLeft)
    {
        if(root->left==NULL && root->right==NULL &&isLeft)
        {
                    sum=sum+root->val;
                return;
          }
        if(root->left)
        help(root->left,true);
                if(root->right)
        help(root->right,false);
            
    }
    int sumOfLeftLeaves(TreeNode* root) {
        
        help(root,false);
        return sum;
    }
};