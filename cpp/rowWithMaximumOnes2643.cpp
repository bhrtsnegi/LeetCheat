/*
Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row.
In case there are multiple rows that have the maximum count of ones, the row with the smallest row number should be selected.
Return an array containing the index of the row, and the number of ones in it.
*/

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> answer;
        int val=0, ind, count=0;
        for(int i=0; i<mat.size(); i++)
        {
            for(int j=0; j<mat[i].size(); j++)
            {
                if(mat[i][j]==1)
                    count++;
            }
            if(count>val)
            {
                val=count;
                ind=i;
            }
            count=0;
        }
        answer.push_back(ind);
        answer.push_back(val);
        return answer;
    }
};
