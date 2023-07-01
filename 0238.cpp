/*
Given an integer array nums, 
return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int mul=1;
        vector<int> sol=nums;
        int count=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
                count++;
            else
                mul*=nums[i];
        }
        if(count>1)
            for(int i=0; i<nums.size(); i++)
                sol[i]=0;
        else if(count==1)
        {
            for(int i=0; i<nums.size(); i++)
            {
                if(nums[i]==0)
                    sol[i]=mul;
                else
                    sol[i]=0;
            }
        }
        else
        {
            for(int i=0; i<nums.size(); i++)
            sol[i]=mul/nums[i];
        }
        return sol;
    }
};
