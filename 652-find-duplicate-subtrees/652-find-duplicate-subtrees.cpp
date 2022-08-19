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
    map<string,int> mp;
    vector<TreeNode*>ans;
    string solve(TreeNode*root)
    {
        if(!root) return "$";
        string path=to_string(root->val);
        string lft=solve(root->left);
        string rt=solve(root->right);
    path=path+","+lft+","+rt;
        mp[path]++;
        if(mp[path]==2)
            ans.push_back(root);
        return path;
      }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        solve(root);
            return ans;
    }
};