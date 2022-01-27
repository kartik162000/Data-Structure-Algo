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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>vec;
        if(!root) return vec;
        vector<int> v;
        q.push(root);
        while(!q.empty())
        {
            v.clear();
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode *t=q.front();
                v.push_back(t->val);
                if(t->left!=NULL)
                    q.push(t->left);
                if(t->right!=NULL)
                    q.push(t->right);
                q.pop();
            }
            vec.push_back(v);
        }
        return vec;
    }
};