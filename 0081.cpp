/*
There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

You must decrease the overall operation steps as much as possible.
*/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int mid;
        int ub=nums.size()-1,lb=0;
        while(ub>=lb)
        {
            mid=(ub+lb)/2;
            if(nums[mid]==target)   return true;

            if(nums[lb]==nums[mid] && nums[mid]==nums[ub])
            {
                ub--;
                lb++;
                continue;
            }

            if(nums[lb]<=nums[mid])
                if(nums[lb] <= target && target < nums[mid])
                    ub = mid-1;
                else
                    lb = mid+1;
            else
                if(nums[mid] < target && target <= nums[ub])
                    lb = mid+1;
                else
                    ub = mid-1;
        }
        return false;
    }
};
