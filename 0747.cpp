/*
You are given an integer array nums where the largest integer is unique.

Determine whether the largest element in the array is at least twice as much as every other number in the array. 
If it is, return the index of the largest element, or return -1 otherwise.
*/

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> x=nums;
        sort(x.begin(), x.end());
        if(x[x.size()-1]>=(x[x.size()-2]*2))
        {
            for(int i=0; i<nums.size(); i++)
                if(x[x.size()-1]==nums[i]) return i;
        }
        return -1;
    }
};
