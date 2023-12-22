/*
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
*/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, count =0;
        int r = 0;
        while(r<nums.size()){
            if(nums[r] == 0)    count++;
            if(count > k){
                if(nums[l] == 0)    count--;
                l++;
            }
            r++;
        }
        return r-l;
    }
};
