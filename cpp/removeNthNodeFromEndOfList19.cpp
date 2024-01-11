/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode *temp= head;
        ListNode *preTemp= new ListNode();
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        temp=head;
        count=count-n+1;
        if(count==1)
            head=temp->next;
        while(count>1)
        {
            count--;
            preTemp=temp;
            temp=temp->next;
        }
        preTemp->next=temp->next;
        return head;
    }
};
