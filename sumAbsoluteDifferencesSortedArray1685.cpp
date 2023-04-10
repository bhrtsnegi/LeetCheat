/*
You are given an integer array nums sorted in non-decreasing order.
Build and return an integer array result with the same length as nums such that result[i] is equal to the summation of absolute differences between nums[i] and all the other elements in the array.
In other words, result[i] is equal to sum(|nums[i]-nums[j]|) where 0 <= j < nums.length and j != i (0-indexed).
*/

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> result;
        int pref=0;
        int suf=0;
        for(int i=1; i<nums.size(); i++)
        {
            suf+=nums[i];
        }
        for(int i=0; i<nums.size(); i++)
        {
            int sum=0;
            sum=suf-pref;
            suf-=nums[i];
            if(i<nums.size()-1)
            pref+=nums[i+1];
            sum+=(nums[i]*i)-nums[i]*(nums.size()-i-1);
            result.push_back(sum);
        }
        return result;
    }
};
