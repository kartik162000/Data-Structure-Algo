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
    int ans=0;
    void help(TreeNode *root,int sum)
    {
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
        {
            sum=sum*10+root->val;
            ans+=sum;
            return;
        }
        sum=sum*10+root->val;
        help(root->left,sum);
        help(root->right,sum);
        return;
    }
        
    int sumNumbers(TreeNode* root) {
    help(root,0);
    return ans;
    }
};