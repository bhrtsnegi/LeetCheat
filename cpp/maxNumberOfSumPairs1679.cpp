/*
You are given an integer array nums and an integer k.

In one operation, you can pick two numbers from the array whose sum equals k and remove them from the array.

Return the maximum number of operations you can perform on the array.
*/

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int target, count=0;
        int lb=0;
        int ub=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(lb<ub)
        {
            if(nums[lb]+nums[ub]==k)
            {
                count++;
                lb++;
                ub--;
            }
            else if(nums[lb]+nums[ub]>k)
            {
                ub--;
            }
            else
            {
                lb++;
            }
        }
        return count;
    }
};
