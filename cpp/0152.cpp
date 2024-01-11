/*
Given an integer array nums, find a subarray that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pref=1, suff=1;
        int maxi=INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            if(pref==0) pref=1;
            if(suff==0) suff=1;

            pref=pref*nums[i];
            suff=suff*nums[nums.size()-i-1];

            maxi=max(maxi,max(pref,suff));
            
        }
        return maxi;
    }
};
