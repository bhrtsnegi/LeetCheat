/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>  result;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            if(i>0 && nums[i]==nums[i-1])   continue;
            int j=i+1, k=nums.size()-1;
            while(j<k)
            {
                int sum=nums[i]+nums[k]+nums[j];
                if(sum<0)
                {
                    j++;
                }
                else if(sum>0)
                {
                    k--;
                }
                else
                {
                    vector<int> temp={nums[i], nums[j], nums[k]};
                    result.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        return result;

    }
};
