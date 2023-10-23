/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid;
        int ub=nums.size()-1,lb=0;
        while(ub>=lb)
        {
            mid=(ub+lb)/2;
            if(nums[mid]==target)   return mid;

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
        return -1;
    }
};
