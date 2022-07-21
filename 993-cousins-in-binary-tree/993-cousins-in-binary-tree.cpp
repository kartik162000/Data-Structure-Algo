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
    int check=0;
    void solve(TreeNode *root, int x,int y,map<int,int> &mp,int lvl)
    {
        if(root==NULL)
            return;
        if(root->left && root->right)
        {
            if(root->left->val==x && root->right->val==y)
                check=1;
            if(root->left->val==y && root->right->val==x)
                check=1;
        }
        mp[root->val]=lvl;
        solve(root->left,x,y,mp,lvl+1);
        solve(root->right,x,y,mp,lvl+1);
        return;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        map<int,int> mp;
        int lvl=0;
        solve(root,x,y,mp,lvl);
        if(check==1)
            return false;
        if(mp[x]==mp[y])
            return true;
        return false;
    }
};