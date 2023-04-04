/*
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0, val;
        int j=nums.size()-1;
        while(i<=j)
        {
            val=(i+j)/2;
            if(nums[val]>target)
            {
                j=val-1;
            }
            else if(nums[val]<target)
            {
                i=val+1;
            }
            else
            {
                return val;
            }
        }
        return -1;
    }
};
