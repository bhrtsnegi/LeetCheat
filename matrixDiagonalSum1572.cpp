/*
Given a square matrix mat, return the sum of the matrix diagonals.
Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.
*/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,j;
        for(int i=0;i<mat.size();i++)
        {
            j=mat.size()-1-i;
            sum+=mat[i][i]+mat[i][j];
            if(i==j)
                sum-=mat[i][i];
        }
        return sum;
    }
};
