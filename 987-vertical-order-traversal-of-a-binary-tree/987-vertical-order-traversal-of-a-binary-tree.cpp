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
       
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*,pair<int,int>>> q;
        map<int,map<int,multiset<int>>>mp;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto n=q.front();
            q.pop();
            TreeNode*nde=n.first;
            int x=n.second.first;
            int y=n.second.second;
            mp[x][y].insert(nde->val);
            if(nde->left)
                q.push({nde->left,{x-1,y+1}});
            if(nde->right)
                q.push({nde->right,{x+1,y+1}});
        }
        vector<vector<int>> ans;
        for(auto x:mp)
        {
            vector<int> v;
            for(auto y:x.second)
            {
                v.insert(v.end(),y.second.begin(),y.second.end());
            }
            ans.push_back(v);
        }
        return ans;
    }
};