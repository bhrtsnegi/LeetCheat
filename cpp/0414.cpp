/*
Given an integer array nums, return the third distinct maximum number in this array. 
If the third maximum does not exist, return the maximum number.
*/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0,sol=0;
        int maxi=nums[nums.size()-1];
        {
            for(int i=nums.size()-1;i>0;i--)
            {
                if(nums[i-1]<nums[i])
                {
                    cnt++;
                    sol=nums[i-1];
                    if(cnt==2)
                        return sol;
                }
            }
        }
        return maxi;
      }
};
