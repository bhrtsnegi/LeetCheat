/*
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.
*/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0; i<size(grid); i++)
        {
            for(int j=0; j<size(grid[i]); j++)
            {
                if(grid[i][j]<0)
                {
                    count=(size(grid[i])-j)+count;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        return count;
    }
};
