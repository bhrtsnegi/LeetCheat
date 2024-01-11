/*
Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.
*/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int mul = 1,r = 0, l = 0, total = 0;
        while(r<nums.size()){
            mul*=nums[r];
            while(mul>=k)   mul/=nums[l++];   
            total+=(r-l+1);
            r++;
        }
        return total;
    }
};
