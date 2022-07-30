/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
            return root;
       queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            Node *curr=NULL;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                Node*nde=q.front();
                q.pop();
                if(curr==NULL)
                {
                    curr=nde;
                    curr->next=NULL;
                }
                else
                {
                    curr->next=nde;
                    curr=nde;
                    curr->next=NULL;
                }
                if(nde->left)
                    q.push(nde->left);
                if(nde->right)
                    q.push(nde->right);
            }
        }
        return root;
    }
};