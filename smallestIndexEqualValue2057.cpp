/*
Given a 0-indexed integer array nums, return the smallest index i of nums such that i mod 10 == nums[i], or -1 if such index does not exist.

x mod y denotes the remainder when x is divided by y.
*/

class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int result, flag=0;
        for(int i=0; i<size(nums); i++)
        {
            if(i%10==nums[i])
            {
                result=i;
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            return -1;
        }
        else
        {
            return result;
        }
    }
};
