/*
You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

Return the sum of all the unique elements of nums.
*/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int count=0, sum=0;
        for(int i=0; i<size(nums); i++)
        {
            for(int j=i+1; j<size(nums); j++)
            {
                if(nums[i]==nums[j] && nums[j]>0)
                {
                    count++;
                    nums[j]=0;
                }
            }
            if(count==0)
            {
                sum=sum+nums[i];
            }
            else
            {
                count=0;
            }
        }
        return sum;
    }
};