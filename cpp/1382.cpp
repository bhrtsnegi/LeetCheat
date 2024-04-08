/*
Given the root of a binary search tree, return a balanced binary search tree with the same node values. If there is more than one answer, return any of them.

A binary search tree is balanced if the depth of the two subtrees of every node never differs by more than 1.
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
    TreeNode* balance(vector<int>& v, int start, int end){
        if(start>end) return NULL;
        int mid = (end+start)/2;
        TreeNode* root = new TreeNode(v[mid]);
        root->left = balance(v, start, mid-1);
        root->right = balance(v, mid+1, end);
        return root;
    }

    void sortedArray(vector<int>& v, TreeNode* root){
        if(!root) return;
        sortedArray(v, root->left);
        v.push_back(root->val);
        sortedArray(v, root->right);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v;
        sortedArray(v, root);
        return balance(v, 0, v.size()-1);
    }
};
