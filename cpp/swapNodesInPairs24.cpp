/*
Given a linked list, swap every two adjacent nodes and return its head. 
You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)
*/
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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* ptr=head;
        ListNode* temp= new ListNode();
        ListNode* preptr= temp;
        while(ptr && ptr->next)
        {
            preptr->next=ptr->next;
            ptr->next=preptr->next->next;
            preptr->next->next=ptr;

            preptr = ptr;
            ptr = ptr->next;
        }
        return temp->next;
    }
};
