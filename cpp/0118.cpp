/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
*/

class Solution {
public:

    vector<int> generateRow(int row){
        long long ans = 1;
        vector<int> sol;
        sol.push_back(1);
        for(int col = 1; col < row; col++){
            ans = ans * (row-col);
            ans = ans / col;
            sol.push_back(ans);
        }
        return sol;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};
