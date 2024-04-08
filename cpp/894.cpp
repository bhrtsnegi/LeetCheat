/*
Given an integer n, return a list of all possible full binary trees with n nodes. Each node of each tree in the answer must have Node.val == 0.

Each element of the answer is the root node of one possible tree. You may return the final list of trees in any order.

A full binary tree is a binary tree where each node has exactly 0 or 2 children.
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
    unordered_map<int, vector<TreeNode*>> dp;
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n%2 == 0) return {};
        if(n == 1) return{new TreeNode(0)};
        vector<TreeNode*> ans;
        if(dp.find(n)!=dp.end()) return dp[n];

        for(int i = 0; i < n; i++){
            vector<TreeNode*> left =  allPossibleFBT(i);
            vector<TreeNode*> right =  allPossibleFBT(n-i-1);

            for(TreeNode* l : left){
                for(TreeNode* r : right){
                    ans.push_back(new TreeNode(0,l,r));
                }
            }
        }
        return dp[n] = ans;
    }
};
