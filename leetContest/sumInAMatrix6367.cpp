/*
You are given a 0-indexed 2D integer array nums. Initially, your score is 0. Perform the following operations until the matrix becomes empty:

From each row in the matrix, select the largest number and remove it. In the case of a tie, it does not matter which number is chosen.
Identify the highest number amongst all those removed in step 1. Add that number to your score.
Return the final score.
*/

class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int max=0,score=0;
        int n=nums[0].size()-1;
    while(n>=0)
    {
        for(int i=0; i<nums.size(); i++)
        {
            if(n==nums[0].size()-1)
            sort(nums[i].begin(), nums[i].end());
            if(max<nums[i][n])
            {
                max=nums[i][n];
            }
        }
        score+=max;
        max=0;
        n--;
    }
       return score; 
    }
};
