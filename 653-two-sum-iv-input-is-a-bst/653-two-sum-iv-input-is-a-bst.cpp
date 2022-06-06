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
    void inorder(vector<int>&v,TreeNode*root)
    {
        if(root==NULL)
            return;
        inorder(v,root->left);
        v.push_back(root->val);
        inorder(v,root->right);
    }
    bool findTarget(TreeNode* root, int target) {
        vector<int> v;
        inorder(v,root);
        int i=0;
        int j=v.size()-1;
        while(i<j)
        {
            if(v[i]+v[j]==target)
                return true;
            else if(v[i]+v[j]<target)
                i++;
            else
                j--;
        }
        return false;
    }
};