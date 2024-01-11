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