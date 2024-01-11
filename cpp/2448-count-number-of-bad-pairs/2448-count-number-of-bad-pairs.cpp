class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> sol;
        long long int sum=0;
        long long int n=nums.size();
        long long int total=(n*(n-1))/2;
        for(int i=0; i<n; i++)
        {
            nums[i]=nums[i]-i;
            sum+=sol[nums[i]];
            sol[nums[i]]++;
        }
        return total-sum;
    }
};