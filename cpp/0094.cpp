/*
Given the root of a binary tree, return the inorder traversal of its nodes' values.
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
    void inorder(TreeNode* root, vector<int>& sol)
    {
        if(root == NULL)    return;
        inorder(root->left, sol);
        sol.push_back(root->val);
        inorder(root->right, sol);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> sol;
        inorder(root, sol);
        return sol;
    }
};
