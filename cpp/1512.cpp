/*
Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.
*/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0, i=0,j=i+1;
        while(j<size(nums))
        {
            if(nums[i]==nums[j])
            {
                count++;
            }

            if(j==size(nums)-1)
            {
                i=i+1;
                j=i;
            }
            
            j++;
        }
        return count;
    }
};
