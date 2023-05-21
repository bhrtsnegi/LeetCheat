/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* start=new ListNode(0);
        ListNode* result=start;
        ListNode* start1=list1;
        ListNode* start2=list2;
        
        while(start1 || start2)
        {
            if(start1==NULL)
            { 
                result->next= start2;
                break;
            }
            if(start2==NULL) 
            {
                result->next= start1;
                break;
            }
            if(start1->val<=start2->val)
            {
                result->next=start1;
                start1=start1->next;
                result=result->next;
            }
            else
            {
                result->next=start2;
                start2=start2->next;
                result=result->next;
            }
        }
        return start->next;

        return start->next;
        
    }
};
