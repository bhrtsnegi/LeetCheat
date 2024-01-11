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
        ListNode *ptr, *pre;
        while(head!=NULL && head->val==val)
            head=head->next;
        ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->val==val)
                pre->next=ptr->next;
            else
            {
                pre=ptr;
            }
            ptr=ptr->next;
        }
        return head;
    }
};
