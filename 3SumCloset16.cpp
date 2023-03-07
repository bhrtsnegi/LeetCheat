/*
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution
*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int val, result=0, min=target;
        val=target;
        for(int i=0; i<nums.size()-2; i++)
        {
            val=target-nums[i];
            for(int j=i+1; j<nums.size()-1; j++)
            {
                val=val-nums[j];
                for(int k=j+1; j<nums.size(); j++)
                {
                    if(val==nums[k] || val-nums[k]<min)
                    {
                        min=val-nums[k];
                    }
                }
            }
        }
        result=target-min;
        return result;

    }
};
