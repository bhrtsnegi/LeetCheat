/*
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in O(1) extra space complexity and O(n) time complexity.
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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* ptr=head;
        ListNode* oddStart=new ListNode();
        ListNode* evenStart=new ListNode();
        ListNode* oddList=oddStart;
        ListNode* evenList=evenStart;
        int i=0;
        while(ptr)
        {
            i++;
            if((i%2)==0)
            {
                evenStart->next=ptr;
                evenStart=evenStart->next;
            }
            else
            {
                oddStart->next=ptr;
                oddStart=oddStart->next;
            }
            ptr=ptr->next;
            oddStart->next=NULL;
            evenStart->next=NULL;
        }
        oddStart->next=evenList->next;
        return oddList->next;
    }
};
