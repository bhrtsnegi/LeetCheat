/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lb=0, ub=nums.size()-1, mid, val=0;
        while(lb<=ub)
        {
            mid=(lb+ub)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
            {
                val=mid+1;
                lb=mid+1;
            }
            else
            {
                val=mid;
                ub=mid-1;
            }
        }
        return val;
    }
};
