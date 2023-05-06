/*
You are given an array of integers nums and an integer target.

Return the number of non-empty subsequences of nums such that the sum of the minimum and maximum element on it is less or equal to target. 
Since the answer may be too large, return it modulo 109 + 7.
*/
const int MOD = 1000000007;

class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int l = 0, r = nums.size() - 1;
        
        vector<int>powerof2(nums.size());
        powerof2[0] = 1;
        for(int i = 1; i < nums.size(); i++) {
            powerof2[i] = (powerof2[i-1] * 2)%MOD;
        }
        while(l <= r) {
            if(nums[l] + nums[r] <= target) {
                ans += powerof2[r - l];
                ans %= MOD;
                l++;
            } else {
                r--;
            }
        }

        return ans;
    }
};
