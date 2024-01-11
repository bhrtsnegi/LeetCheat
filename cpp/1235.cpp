/*
We have n jobs, where every job is scheduled to be done from startTime[i] to endTime[i], obtaining a profit of profit[i].

You're given the startTime, endTime and profit arrays, return the maximum profit you can take such that there are no two jobs in the subset with overlapping time range.

If you choose a job that ends at time X you will be able to start another job that starts at time X.
*/

class Solution {
public:

    int dp[50001];

    int maxProfit(vector<vector<int>>& jobs, vector<int>& start, int n, int ind ){
        if(ind == n) return 0;

        if(dp[ind] != -1)   return dp[ind];

        int nextIndex = lower_bound(start.begin(), start.end(), jobs[ind][1]) - start.begin();

        int maxiProfit = max(maxProfit(jobs, start, n, ind+1), jobs[ind][2] + maxProfit(jobs, start, n, nextIndex));

        return dp[ind] = maxiProfit;
    }

    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<vector<int>> jobs;

        memset(dp, -1, sizeof(dp));

        for(int i =0; i<profit.size(); i++)
            jobs.push_back({startTime[i],endTime[i],profit[i]});

        sort(jobs.begin(), jobs.end());

        for(int i = 0; i < profit.size(); i++)
            startTime[i] = jobs[i][0];

        return maxProfit(jobs, startTime, profit.size(), 0);
    }
};
