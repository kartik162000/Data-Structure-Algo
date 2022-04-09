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
    ListNode* mergeNodes(ListNode* head) {
    ListNode *n=new ListNode(-1);
        ListNode*e=n;
        ListNode *temp=head->next;
        int sum=0;
        while(temp!=NULL)
        {
            if(temp->val==0)
            {
                ListNode *s=new ListNode(sum);
                n->next=s;
                n=n->next;
                sum=0;
            }
            else
            {
                sum=sum+(temp->val);
            }
            temp=temp->next;
        }
        return e->next;
        
    }
};