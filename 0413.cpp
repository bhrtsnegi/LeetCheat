/*
An integer array is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.

For example, [1,3,5,7,9], [7,7,7,7], and [3,-1,-5,-9] are arithmetic sequences.
Given an integer array nums, return the number of arithmetic subarrays of nums.

A subarray is a contiguous subsequence of the array.
*/

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int sum = 0;
        if(nums.size()<3)   return 0;
        int start = 0, end = 0, diff, n;

        for(int i = 0; i < nums.size(); i++){
            diff = nums[end] - nums[start];
            while(i+1 < nums.size() &&  nums[i+1] - nums[i] == diff){
                end++;
                i++;
            }

            n = (end - start) + 1;
            if(n >= 3)
            sum += (n-2)*(n+1-2)/2;
            start = end;
            end++;
        }
        return sum;
    }
};
