/*
Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
You must implement a solution with a linear runtime complexity and use only constant extra space.
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count;
        for(int i=0; i<nums.size(); i++)
        {
            count=0;
            for(int j=0; j<nums.size(); j++)
            {
                if(i!=j && nums[i]==nums[j])
                    count=1;
            }
            if(count==0)
                return nums[i];
        }
        return 0;
    }
};
