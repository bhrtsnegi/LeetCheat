/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int val;
        for(int i=0; i<nums.size(); i++)
        {
            if(i!=nums[i])
                return i;
            val=i;
        }
        return val+1;
    }
};
