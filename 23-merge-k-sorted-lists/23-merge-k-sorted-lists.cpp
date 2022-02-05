/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        priority_queue<int, vector<int>,greater<int> > p;
        for(auto x:lists)
        {
            ListNode *temp=x;
            while(temp!=NULL)
            {
                p.push(temp->val);
                temp=temp->next;
            }
        }
    ListNode *merger=new ListNode(-1);
    ListNode *temp=merger;
     while (!p.empty())
    {
        ListNode*n=new ListNode(p.top());
        temp->next=n;
        temp=n;
        p.pop();
    }
    return merger->next;
}
};