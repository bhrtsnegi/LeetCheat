/*
Given a 0-indexed integer array nums of length n and an integer k,
return the number of pairs (i, j) where 0 <= i < j < n, such that nums[i] == nums[j] and (i * j) is divisible by k.
*/

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count=0;
        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]==nums[j] && (i*j)%k==0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};
