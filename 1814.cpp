/*
You are given an array nums that consists of non-negative integers. Let us define rev(x) as the reverse of the non-negative integer x. For example, rev(123) = 321, and rev(120) = 21. A pair of indices (i, j) is nice if it satisfies all of the following conditions:

0 <= i < j < nums.length
nums[i] + rev(nums[j]) == nums[j] + rev(nums[i])
Return the number of nice pairs of indices. Since that number can be too large, return it modulo 109 + 7.
*/

class Solution {
public:
    int rev(int y)
    {
        int temp, val=0;
        while(y)
        {
            temp=y%10;
            val=val*10+temp;
            y/=10;
        }
        return val;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int> sol;
        long long x=0;
        for(int i=0; i<nums.size(); i++)
        {
            int num=nums[i]-rev(nums[i]);
            if(sol.count(num))
            x+=sol[num];
            sol[num]++;
        }
        return x%1000000007;
    }
};
