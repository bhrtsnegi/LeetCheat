/*
Given the root of a Binary Search Tree (BST), return the minimum absolute difference between the values of any two different nodes in the tree.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // to get minimum value 
    int minDiff= INT_MAX;
    int val=-1; //to store the value of root node
    int getMinimumDifference(TreeNode* root) {
        if(root->left != NULL) //if root's left node is not null
            getMinimumDifference(root->left); //recursive call for left element
        if(val>=0)
            minDiff= min(minDiff, root->val-val); // taking minimum of previous and current value
        val=root->val; //assigning new root value 
        if(root->right!=NULL) //if root's right node is not null
            getMinimumDifference(root->right);
        return minDiff;
    }
};
