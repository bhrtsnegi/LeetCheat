/*
Given the root of a binary tree, return the preorder traversal of its nodes' values.
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
    void preOrder(TreeNode* root, vector<int>& sol){
        if(root == NULL)    return;

        sol.push_back(root->val);
        preOrder(root->left, sol);
        preOrder(root->right, sol);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> sol;
        preOrder(root, sol);
        return sol;
    }
};
