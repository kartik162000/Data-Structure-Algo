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
    void help(TreeNode* root,vector<vector<int>> &vec,vector<int>v)
    {
        if(root==NULL)
            return;
        v.push_back(root->val);
      if(root->left==NULL && root->right==NULL)
        {
            vec.push_back(v);
            return ;
        }
        help(root->left,vec,v);
        help(root->right,vec,v);
    
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<vector<int>> vec;
        vector<int> v;
        help(root,vec,v);
        vector<string> ff;
        for(auto x:vec)
        {
            string st="";
            for(auto y:x)
                st+=to_string(y)+"->";
            ff.push_back(st.substr(0, st.size()-2));
        }
        return ff;
    }
};