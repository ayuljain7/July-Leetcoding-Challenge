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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * root=head;
        while(head!=NULL && head->val==val)
        {
            root=head->next;
            head=head->next;
        }
       while(head!=NULL)
       {
           if(head->next!=NULL && head->next->val==val)
               head->next=head->next->next;
           else
               head=head->next;
       }
        return root;
    }
};