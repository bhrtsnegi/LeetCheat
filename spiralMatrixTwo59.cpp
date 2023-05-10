/*
Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
*/

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n , vector<int> (n,0));
        int r=n;
        int c =n;
        int count =1;
        int total =n*n;
        
        // all index 
        
        int sRow=0;
        int sCol=0;
        int eRow=r-1;
        int eCol=c-1;
        
        while(count<=total)
        {
            for(int i=sCol;count<=total && i<=eCol; i++)
            {
                ans[sRow][i]=count;
                count++;
            }
            sRow++;
            
            for(int i=sRow;count<=total && i<=eRow; i++)
            {
                ans[i][eCol]=count;
                count++;
            }
            eCol--;
            
            for(int i=eCol;count<=total && i>=sCol; i--)
            {
                ans[eRow][i]=count;
                count++;
            }
            eRow--;
            
            for(int i=eRow;count<=total && i>=sRow; i--)
            {
                ans[i][sCol]=count;
                count++;
            }
            sCol++;
        }
        
        
        return ans;
    }
};
