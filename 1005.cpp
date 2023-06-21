/*
Given an integer array nums and an integer k, modify the array in the following way:

choose an index i and replace nums[i] with -nums[i].
You should apply this process exactly k times. You may choose the same index i multiple times.

Return the largest possible sum of the array after modifying it in this way.
*/

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        for(int i=0;k>0; i++)
        {
            if(i==nums.size()) i=0;
            if(nums[i]<0 && nums.size()>i)
            {
                nums[i]=-nums[i];
                k--;
            }
                
            else if(nums[i]==0 && nums.size()>i)
                k=0;
            else if(nums[i]>0)
            {
                sort(nums.begin(), nums.end());
                while(k!=0)
                {
                    nums[0]=-nums[0];
                    k--;
                }
                break;
            }
        }
        int sum=0;
        for(int i=0; i<nums.size(); i++)
            sum+=nums[i];
        return sum;
    }
};
