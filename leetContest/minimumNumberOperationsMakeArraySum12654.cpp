/*
You are given a 0-indexed array nums consisiting of positive integers. You can do the following operation on the array any number of times:

Select an index i such that 0 <= i < n - 1 and replace either of nums[i] or nums[i+1] with their gcd value.
Return the minimum number of operations to make all elements of nums equal to 1. If it is impossible, return -1.

The gcd of two integers is the greatest common divisor of the two integers.
*/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int gcdsol, count=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
        }
        
        if(count>0)
            return nums.size()-count;
        
        int minOP=INT_MAX;
        for(int i=0; i<nums.size()-1; i++)
        {
            int gcdsol= nums[i];
            for(int j=i+1; j<nums.size(); j++)
            {
                gcdsol=__gcd(nums[j], gcdsol);
                if(gcdsol==1)
                {
                    minOP= min(minOP, j-i+1);
                    break;
                }    
            }
        }
        if(minOP==INT_MAX)
            return -1;
        return nums.size()+minOP-2;
    }
};
