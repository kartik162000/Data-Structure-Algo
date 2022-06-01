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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode *> q;
        vector<double> ans;
        q.push(root);
        while(!q.empty())
        {
            double ff=0.0;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                     TreeNode *t=q.front();
                if(t->left!=NULL)
                    q.push(t->left);
                if(t->right!=NULL)
                    q.push(t->right);
                    ff+=(double)(t->val);
                 q.pop();
            }
            ans.push_back(ff/n);
                          
        }
        return ans;
    }
};