/*
Given an m x n matrix, return all elements of the matrix in spiral order.
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int r=matrix.size();
        int c =matrix[0].size();
        int count =0;
        int total =r*c;
        
        //// all index 
        
        int sRow=0;
        int sCol=0;
        int eRow=r-1;
        int eCol=c-1;
        
        while(count<total)
        {
            for(int i=sCol;count<total && i<=eCol; i++)
            {
                ans.push_back(matrix[sRow][i]);
                count++;
            }
            sRow++;
            
            for(int i=sRow;count<total && i<=eRow; i++)
            {
                ans.push_back(matrix[i][eCol]);
                count++;
            }
            eCol--;
            
            for(int i=eCol;count<total && i>=sCol; i--)
            {
                ans.push_back(matrix[eRow][i]);
                count++;
            }
            eRow--;
            
            for(int i=eRow;count<total && i>=sRow; i--)
            {
                ans.push_back(matrix[i][sCol]);
                count++;
            }
            sCol++;
        }
        
        
        return ans;
    }
};
