/*
You are given an m x n matrix grid consisting of positive integers.

Perform the following operation until grid becomes empty:

Delete the element with the greatest value from each row. If multiple such elements exist, delete any of them.
Add the maximum of deleted elements to the answer.
Note that the number of columns decreases by one after each operation.

Return the answer after performing the operations described above.
*/
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i=0; i<grid.size(); i++)
        {
            sort(grid[i].begin(), grid[i].end());
        }
        int sum=0,max=0,m=grid[0].size()-1;
        while(m>=0)
        {
            for(int j=0; j<grid.size(); j++)
            {
                if(max<grid[j][m])
                    max=grid[j][m];
            }
            sum+=max;
            m--;
            max=0;
        }
        return sum;
    }
};
