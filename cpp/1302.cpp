/*
Given the root of a binary tree, return the sum of values of its deepest leaves.
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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        int count = 0;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i = 0; i < n; i++){
                TreeNode* node = q.front();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                q.pop();
            }
            count++;
        }

        queue<TreeNode*> finalQueue;
        int start = 0;
        finalQueue.push(root);
        while(start<count-1){
            int n = finalQueue.size();
            for(int i = 0; i < n; i++){
                TreeNode* node = finalQueue.front();
                if(node->left) finalQueue.push(node->left);
                if(node->right) finalQueue.push(node->right);
                finalQueue.pop();
            }
            start++;
        }

        int sum = 0;
        while(!finalQueue.empty()){
            TreeNode* node = finalQueue.front();
            sum += node->val;
            finalQueue.pop();
        }
        return sum;
    }
};
