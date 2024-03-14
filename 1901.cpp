/*
A peak element in a 2D grid is an element that is strictly greater than all of its adjacent neighbors to the left, right, top, and bottom.

Given a 0-indexed m x n matrix mat where no two adjacent cells are equal, find any peak element mat[i][j] and return the length 2 array [i,j].

You may assume that the entire matrix is surrounded by an outer perimeter with the value -1 in each cell.

You must write an algorithm that runs in O(m log(n)) or O(n log(m)) time.
*/

class Solution {
public:
    int matrixLargest(vector<vector<int>>& mat, int mid){
        int maxi = -1;
        int index = -1;
        for(int i =0; i < mat.size(); i++){
            if(maxi< mat[i][mid]){
                maxi = mat[i][mid];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low = 0;
        int high = mat[0].size()-1;
        while(low <= high){
            int mid = (low+high)/2;
            int num = matrixLargest(mat, mid);
            int left = mid-1 >= 0 ? mat[num][mid-1] : -1;
            int right = mid+1 < mat[0].size() ? mat[num][mid+1] : -1;

            if(mat[num][mid] > left && mat[num][mid] > right) return {num, mid};

            else if (mat[num][mid] < left) high = mid-1;

            else low = mid + 1;
        }

        return {0,0};
    }
};
