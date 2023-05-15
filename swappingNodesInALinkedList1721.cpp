/*
You are given the head of a linked list, and an integer k.
Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).
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

// METHOD 1:
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* ptr= head;
        int x,y, count=0;
        while(ptr!=NULL)
        {
            count++;
            if(count==k)
                x=ptr->val;
            ptr=ptr->next;
        }
        ptr=head;
        for(int i=1; i<=count-k; i++)
            ptr=ptr->next;

        y=ptr->val;
        ptr->val=x;
        
        //METHOD 2:
        class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* ptr= head;
        ListNode* rightHead=head;
        ListNode* leftHead= head;
        int count=1;
        while(ptr!=NULL)
        {
            if(count<k)    leftHead=leftHead->next;
            if(count>k)     rightHead=rightHead->next;

            count++;
            ptr=ptr->next;
        }
        swap(leftHead->val,rightHead->val);
        return head;
    }
};
        ptr=head;
        for(int i=1; i<k; i++)
        ptr=ptr->next;
        ptr->val=y;
        return head;
    }
};
