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
    ListNode* swapNodes(ListNode* head, int k) {
        int len=0;
        ListNode*prev;
       ListNode *l=head;
        ListNode *r=head;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            len++;
            prev=temp;
            temp=temp->next;
        }
        if(len<2)
            return head;
        if(len==k || k==1)
        {
            swap(prev->val,head->val);
            return head;
        } 
        int ct=0;
        ListNode *t,*t1;
        while(ct<len)
        {
            if(ct==k-1)
            {
               t=l;
            }
           if(ct==len-k)
           {
               t1=l;
           }
            ct++;
            l=l->next;
        }
        cout<<"left value is:"<<t->val<<"\n";
        cout<<"right value is:"<<t1->val<<"\n";
        swap(t->val,t1->val);
        return head;
    }
};