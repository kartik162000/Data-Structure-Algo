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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int ct=0;
        ListNode *temp1=list1,*temp2=list2,*res,*f,*l;
        while(temp1!=NULL)
        {
            if(ct==a-1)
            {
                res=temp1;
            }
            if(ct==b)
            {
                f=temp1->next;
            }
            ct++;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            l=temp2;
            temp2=temp2->next;
        }
        res->next=list2;
        l->next=f;
        
        return list1;
    }
};