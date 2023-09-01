/*
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
*/

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int count=0;
        for(int i=0; i<=n; i++)
        {
            int k=i;
            while(k!=0)
            {
                if(k%2==1)
                    count++;
                k/=2;
            }
            ans.push_back(count);
            count=0;
        }
        return ans;
    }
};
