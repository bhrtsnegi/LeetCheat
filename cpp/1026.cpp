/*
Given the root of a binary tree, find the maximum value v for which there exist different nodes a and b where v = |a.val - b.val| and a is an ancestor of b.

A node a is an ancestor of b if either: any child of a is equal to b or any child of a is an ancestor of b.
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

    int diff(TreeNode* node, int maxVal, int minVal){
        if(node == NULL)    return maxVal - minVal;

        maxVal = max(maxVal, node->val);
        minVal = min(minVal, node->val);

        int maxiLeft = diff(node->left, maxVal, minVal);
        int maxiRight = diff(node->right, maxVal, minVal);

        return max(maxiRight, maxiLeft);
    }

    int maxAncestorDiff(TreeNode* root) {
        if(root == NULL)    return 0;
        return diff(root, root->val, root->val);
    }
};
