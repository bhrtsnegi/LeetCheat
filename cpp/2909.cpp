/*
You are given a 0-indexed array nums of integers.

A triplet of indices (i, j, k) is a mountain if:

i < j < k
nums[i] < nums[j] and nums[k] < nums[j]
Return the minimum possible sum of a mountain triplet of nums. If no such triplet exists, return -1.
*/

#define ll long long
class Solution {
public:

    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        vector< ll > premin(n);
        vector< ll > sufmin(n);
        premin[0] = nums[0];
        sufmin[n-1] = nums[n-1];
        ll sol = LONG_MAX;
        for(int i = 1; i < n; i++)  
            premin[i] = min(premin[i-1], 1ll * nums[i]);
        
        for(int i = n-2; i >= 0; i--)
            sufmin[i] = min(sufmin[i+1], 1ll * nums[i]);

        for(int i = 1; i < n-1; i++){
            if(nums[i] > premin[i-1] && nums[i]>sufmin[i+1])
                sol = min(sol, nums[i] + premin[i-1] + sufmin[i+1]);
        }

        return sol;
    }
};
