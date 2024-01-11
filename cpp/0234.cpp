/*
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
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
    bool isPalindrome(ListNode* head) {
        stack<int> myStack;
        ListNode *temp = head;

        while(temp){
            myStack.push(temp->val);
            temp = temp->next;
        }

        temp = head;

        while(temp){
            if(myStack.top()!=temp->val)    return false;
            temp = temp->next;
            myStack.pop();
        }
        return true;
    }
};
