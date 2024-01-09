/*  
Consider all the leaves of a binary tree, from left to right order, the values of those leaves form a leaf value sequence.
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

    void getLeaf(TreeNode* root, string& leaf) {
        if (root == NULL) return;

        getLeaf(root->left, leaf);
        if ((root->left == NULL) && (root->right == NULL)) {
            leaf += (to_string(root->val) + ",");
        }
        getLeaf(root->right, leaf);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string leaf1 = "", leaf2 = "";
        getLeaf(root1, leaf1);
        getLeaf(root2, leaf2);
        
        return leaf1 == leaf2;
    }
};
