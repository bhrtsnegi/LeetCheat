/*
An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return the nth ugly number.
*/

class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp[0] = 1;
        int p1 = 0;
        int p2 = 0;
        int p3 = 0;
        for(int i=1; i<n; i++)
        {
            int twoMultiple = dp[p1] * 2;
            int threeMultiple = dp[p2] * 3;
            int fiveMultiple = dp[p3] * 5;

            dp[i] = min(twoMultiple, min(threeMultiple, fiveMultiple));

            if(dp[i] == twoMultiple) p1++;
            if(dp[i] == threeMultiple) p2++;
            if(dp[i] == fiveMultiple) p3++;
        }
        return dp[n-1];
    }
};
