/*
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, 
the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.
*/

class Solution {
public:

    int solve(vector<int>& nums){
        int n = nums.size();
        int prev2 = 0;
        int prev1 = nums[0];

        for(int i = 1; i < n; i++){
            int incl = prev2 + nums[i];
            int excl = prev1 + 0;

            int ans = max(incl, excl);

            prev2 = prev1;
            prev1 = ans;
        }

        return prev1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        return solve(nums);
    }
};
