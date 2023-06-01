/*
You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* final=new ListNode();
        ListNode* pre=final;
        int carry=0, sum=0;

        // if node not null or carry it will run
        while(l1 || l2 || carry)
        {
            //everytime sum=0 because making operation for next node
            sum=0;
            //if l1 not null sum will add else ignore for null cases
            if(l1)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            //same as for l1
            if(l2)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            //carry will be added everytime
            sum+=carry;
            //carry is sum divide 10 so we will get if there is 2 digit number
            carry=sum/10;
            //creating new node everytime and assigning it to list
            ListNode* temp=new ListNode(sum%10);
            pre->next=temp;
            pre=pre->next;
        }
        //returning next of head don't know why
        return final->next;
    }
};
