/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

*/

class Solution {
    public int[] runningSum(int[] nums) {
        // int size= sizeof(nums)/sizeof(nums[0]);
        int prev=0;
        for(int i=0; i<nums.length; i++)
        {
            nums[i]= nums[i]+ prev;
            prev= nums[i];
        }
        return nums;
    }
}
