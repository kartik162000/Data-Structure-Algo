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
    void help(TreeNode *root,vector<vector<int>> &vec, vector<int>v)
    {
        if(root==NULL)
            return;
        v.push_back(root->val);
        if(root->left==NULL && root->right==NULL)
        {
            vec.push_back(v);
            return;
        }
        help(root->left,vec,v);
        help(root->right,vec,v);

    }
    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        vector<vector<int>> vec;
        vector<int> v;
        help(root,vec,v);
        for(auto x:vec)
        {
            string s="";
            for(auto y:x)
            {
                s+=to_string(y);
            }
            cout<<s<<"\n";
            sum+=stoi(s, 0, 2);
        }
        return sum;
    }
};