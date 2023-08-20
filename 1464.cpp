/*
Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int sol, count=0;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                sol=(nums[i]-1)*(nums[j]-1);
                if(count<sol)
                {
                    count=sol;
                }
            }
        }
        return count;
    }
};
