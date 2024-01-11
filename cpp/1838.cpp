/*
The frequency of an element is the number of times it occurs in an array.

You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.

Return the maximum possible frequency of an element after performing at most k operations.
*/

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int s=0;
        int maxi= 0;
        long total = 0;
        for(int i=0; i<nums.size(); i++){
            long val = nums[i];
            total += nums[i];
            while((val*(i-s+1))>total+k){
                total-=nums[s];
                s++;
            }
            maxi = max(i-s+1, maxi);
            
        }
        return maxi;
    }
};
