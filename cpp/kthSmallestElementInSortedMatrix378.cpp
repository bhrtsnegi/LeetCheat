/*
Given an n x n matrix where each of the rows and columns is sorted in ascending order, return the kth smallest element in the matrix.

Note that it is the kth smallest element in the sorted order, not the kth distinct element.

You must find a solution with a memory complexity better than O(n2).
*/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> temp;
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[i].size(); j++)
            {
                temp.push_back(matrix[i][j]);
            }
        }
        sort(temp.begin(), temp.end());
        for(int i=0; i<temp.size(); i++)
        {
            if(i==k-1)
            {
                return temp[i];
            }
        }
        return 0;
    }
};
