/*
Given an array nums of integers, return how many of them contain an even number of digits.
*/
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result=0, count=0, temp;
        for(int i=0; i<size(nums); i++)
        {
            temp=nums[i];
            while(temp!=0)
            {
                temp=temp/10;
                count++;
            }
            if(count%2==0)
            {
                result++;
            }
            count=0;
        }
        return result;
    }
};