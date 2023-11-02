/*
Given the head of a linked list, rotate the list to the right by k places.
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
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head || !head->next || k==0)    return head;
        ListNode* temp = head;
        int count=1;
        while(temp->next && ++count)
            temp=temp->next;

        temp->next=head;

        temp=head;
            k = k % count;
            k = count - k;
            while(--k)
                temp = temp->next;
            head = temp->next;
            temp->next=NULL;
            

        return head;
        
    }
};
