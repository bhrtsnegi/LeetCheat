/*
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j].
An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.
*/

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int check=0,k=0;
        if(nums.size()<=2) return true;
        for(int i=0; i<nums.size()-1; i++)
        {
            check=nums[i+1]-nums[i];
            k=i+1;
            if(check!=0) break;
        }
        if(check<0)
        {
            for(int i=k; i<nums.size()-1; i++)
            {
                if(nums[i+1]>nums[i])
                    return false;
            }
        }
        else
        {
            for(int i=k; i<nums.size()-1; i++)
            {
                if(nums[i+1]<nums[i])
                    return false;
            }
        }
        return true;
    }
};
