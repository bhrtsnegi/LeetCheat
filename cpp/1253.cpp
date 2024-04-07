/*
Given the following details of a matrix with n columns and 2 rows :

The matrix is a binary matrix, which means each element in the matrix can be 0 or 1.
The sum of elements of the 0-th(upper) row is given as upper.
The sum of elements of the 1-st(lower) row is given as lower.
The sum of elements in the i-th column(0-indexed) is colsum[i], where colsum is given as an integer array with length n.
Your task is to reconstruct the matrix with upper, lower and colsum.

Return it as a 2-D integer array.

If there are more than one valid solution, any of them will be accepted.

If no valid solution exists, return an empty 2-D array.
*/

class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        vector<vector<int>> ans(2,vector<int>(colsum.size(),0));
        for(int i=0;i<colsum.size();i++)
        {
            if(colsum[i]==1)
            {
                if(upper>lower)
                {
                    ans[0][i]=1;
                    upper--;
                }
                    
                else
                {
                    ans[1][i]=1;
                    lower--;
                }
                    
            }
            
            if(colsum[i]==2)
            {
                    ans[0][i]=1;
                    ans[1][i]=1;
                    
                upper--;
                lower--;
            }
            
            if(upper<0 or lower<0) return {};
        }
        if(upper!=0 or lower!=0)  
            return {};
        
        return ans;
        
    }
};
