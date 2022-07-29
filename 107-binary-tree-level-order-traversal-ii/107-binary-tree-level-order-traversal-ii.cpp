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
    void help(vector<vector<int>> & ans,int lvl,TreeNode*root)
    {
        if(root==NULL)
            return;
        if(ans.size()==lvl)
            ans.push_back(vector<int>());
        ans[lvl].push_back(root->val);
        help(ans,lvl+1,root->left);
        help(ans,lvl+1,root->right);
        return;
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        help(ans,0,root);
        reverse(ans.begin(),ans.end());
        return  ans;
    }
};