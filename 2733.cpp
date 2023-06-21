/*
Given an integer array nums containing distinct positive integers, 
find and return any number from the array that is neither the minimum nor the maximum value in the array, or -1 if there is no such number.
Return the selected integer.
*/
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++)
        if(nums[i]!=nums[i+1] && nums[i+1]!=nums[nums.size()-1])
            return nums[i+1];

        return -1;
    }
};
