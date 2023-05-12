/*
You are given the head of a linked list, which contains a series of integers separated by 0's. 
The beginning and end of the linked list will have Node.val == 0.
For every two consecutive 0's, merge all the nodes lying in between them into a single node 
whose value is the sum of all the merged nodes. The modified list should not contain any 0's.
Return the head of the modified linked list.
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ptr=head;
        ListNode* temp=head;
        int sum=0;
        head=temp;
        ptr=ptr->next;
        while(ptr!=NULL)
        {
            while(ptr->val!=0)
            {
                sum+=ptr->val;
                ptr=ptr->next;
            }
            temp->val=sum;
            sum=0;
            ptr=ptr->next;
            if(ptr==NULL)   
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
    }
};
