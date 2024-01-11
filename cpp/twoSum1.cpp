/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int temp;
        for(int i=0; i<size(nums); i++)
        {
            temp= target-nums[i];
            for(int j=i+1; j<size(nums); j++)
            {
                if(temp==nums[j])
                {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        return v;
    }
};