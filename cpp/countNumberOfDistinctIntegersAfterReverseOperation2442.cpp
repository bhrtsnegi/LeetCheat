/*
You are given an array nums consisting of positive integers.

You have to take each integer in the array, reverse its digits, and add it to the end of the array. 
You should apply this operation to the original integers in nums.

Return the number of distinct integers in the final array.
*/

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int change=0;
        int value=0;       
        set<int> s;
        for(int i=0; i<nums.size(); i++)
        {
            s.insert(nums[i]);
        }
        for(int i=0; i<nums.size(); i++)
        {
            change = nums[i];
            while(change!=0)
            {
                value=(value*10)+change%10;
                change/=10;
            }
            s.insert(value);
            value=0;
        }
        return s.size();
    }
};
