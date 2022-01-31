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
       ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode **slow = &head, *fast = head;
    for (int i = 1; i < n; i++)
      fast = fast->next;
    while (fast->next) {
      fast = fast->next;
      slow = &(*slow)->next;
    }
    *slow = (*slow)->next;
    return head;
  }
 
};