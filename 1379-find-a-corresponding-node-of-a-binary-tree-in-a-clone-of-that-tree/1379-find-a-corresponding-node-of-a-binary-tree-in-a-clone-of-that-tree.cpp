/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private: 
    void inOrder(TreeNode* orgRoot, TreeNode* clnRoot, TreeNode* target, TreeNode* &ans) {
        if(orgRoot == NULL) return;
        if(orgRoot == target) {
            ans = clnRoot;
            return;
        }
        inOrder(orgRoot->left, clnRoot->left, target, ans);
        inOrder(orgRoot->right, clnRoot->right, target, ans);
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans;
        inOrder(original, cloned, target, ans);
        return ans;
    }
};