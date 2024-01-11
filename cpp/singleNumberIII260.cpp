/*
Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.
You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.
*/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> result;
        int flag=0, count=0;;
        for(int i=0; i<nums.size(); i++)
        {
            flag=0;
            for(int j=0; j<nums.size(); j++)
            {
                if(i!=j && nums[i]==nums[j])
                    flag=1;
            }
            if(flag==0)
            {
                result.push_back(nums[i]);
                count++;
                if(count==2)
                    break;
            }
        }
        return result;
    }
};
