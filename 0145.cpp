/*
Given the root of a binary tree, return the postorder traversal of its nodes' values.
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
    void postOrder(TreeNode* root, vector<int>& sol){
        if(root == NULL)    return;

        postOrder(root->left, sol);
        postOrder(root->right, sol);
        sol.push_back(root->val);AC
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> sol;
        postOrder(root, sol);
        return sol;
    }
};
