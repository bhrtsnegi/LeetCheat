/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size()-1;
        for(int i=0; i<size; i++)
        {
            if(nums[i]==0)
            {
                for(int j=i; j<size; j++)
                {
                    nums[j]=nums[j+1];
                }
                i--;
                nums[size]=0;
                size--;
            }    
        }
    }
};
