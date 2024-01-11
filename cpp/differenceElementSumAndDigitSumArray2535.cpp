/*
You are given a positive integer array nums.

The element sum is the sum of all the elements in nums.
The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.
Return the absolute difference between the element sum and digit sum of nums.

Note that the absolute difference between two integers x and y is defined as |x - y|.
*/

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0, digitSum=0, n, val, i=0, count;
        while(i<size(nums))
        {
            sum =sum+nums[i];
            if(nums[i]<10)
            {
                digitSum= digitSum+ nums[i];
            }
            else
            {
                while(nums[i]!=0)
                {
                    val=nums[i]%10;
                    digitSum=digitSum + val;
                    nums[i]=nums[i]/10;
                }
            }
            i++;
        }
        return abs(sum-digitSum);
    }
};