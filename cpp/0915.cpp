/*
Given an integer array nums, partition it into two (contiguous) subarrays left and right so that:

Every element in left is less than or equal to every element in right.
left and right are non-empty.
left has the smallest possible size.
Return the length of left after such a partitioning.

Test cases are generated such that partitioning exists.
*/

class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int result=0, minNum=nums[0], maxNum=nums[0];
       for(int i=0; i<nums.size(); i++)
       {
           if(nums[i]<minNum)
           {
               result=i;
               minNum=maxNum;
           }
           maxNum=max(nums[i], maxNum);
       } 
       return result+1;
    }
};
