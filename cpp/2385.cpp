/*
You are given the root of a binary tree with unique values, and an integer start. At minute 0, an infection starts from the node with value start.

Each minute, a node becomes infected if:

The node is currently uninfected.
The node is adjacent to an infected node.
Return the number of minutes needed for the entire tree to be infected.
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

    void convert(TreeNode* node, int parent, unordered_map<int, vector<int>>& myGraph){
        if(node == NULL)    return;

        //created an reference array for key node->val and will insert all adjacent node in this vector 
        vector<int>& adjacentList = myGraph[node->val];

        // create graph for binary tree
        if(parent != 0) adjacentList.push_back(parent);
        if(node->left  != NULL)    adjacentList.push_back(node->left->val);
        if(node->right  != NULL)    adjacentList.push_back(node->right->val);

        convert(node->left, node->val, myGraph);
        convert(node->right, node->val, myGraph);
    }


    int amountOfTime(TreeNode* root, int start) {
        // adjacent list where every value have a list assigned 
        unordered_map<int, vector<int> > myGraph;
        // Convert the tree into graph where 0 is the temporary root node as it is out of the range of element
        convert(root, 0, myGraph);


        //performing BFS so queue is taken and start element is pushed
        queue<int> q;
        q.push(start);
        int minute = 0;

        //set for all visited node as we don't want repetitive elements
        unordered_set<int> visited;
        visited.insert(start);


        //BFS traversal
        while(!q.empty()){
            int size = q.size();

            while(size--){
                int node = q.front();
                q.pop();

                for(int child : myGraph[node]){
                    if(visited.find(child) == visited.end()){
                        visited.insert(child);
                        q.push(child);
                    }
                }
            }
            minute++;
        }
        return minute-1;
    }
};
