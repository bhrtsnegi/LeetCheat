/*
You are given two linked lists: list1 and list2 of sizes n and m respectively.

Remove list1's nodes from the ath node to the bth node, and put list2 in their place.

The blue edges and nodes in the following figure indicate the result:


Build the result list and return its head.
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* head=list1;
        ListNode* preptr=head;
        int i=0;
        while(i<a)
        {
            preptr=list1;
            list1=list1->next;
            i++;
        }
        preptr->next=list2;
        i=a;
        while(i<=b)
        {
            list1=list1->next;
            i++;
        }
        while(list2->next)
        {
            list2=list2->next;
        }
        list2->next=list1;
        return head;
    }
};
