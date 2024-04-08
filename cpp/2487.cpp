/*
You are given the head of a linked list.

Remove every node which has a node with a greater value anywhere to the right side of it.

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
    ListNode* removeNodes(ListNode* head) {
        stack<int> myStack;
        ListNode* temp = head;

        while(temp){
            while(!myStack.empty() && myStack.top()<temp->val) myStack.pop();
            myStack.push(temp->val);
            temp = temp->next;
        }

        if(myStack.empty()) return NULL;

        vector<int> myArray;
        while(!myStack.empty()){
            myArray.push_back(myStack.top());
            myStack.pop();
        }

        reverse(begin(myArray), end(myArray));

        int size = myArray.size();
        temp = head;
        for(int i = 0; i < size; i++){
            temp->val = myArray[i];
            if(i != size-1) temp = temp->next;
        }
        temp->next = NULL;
        return head;
    }
};
