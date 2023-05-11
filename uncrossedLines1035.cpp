/*
You are given two integer arrays nums1 and nums2. We write the integers of nums1 and nums2 (in the order they are given) 
on two separate horizontal lines.

We may draw connecting lines: a straight line connecting two numbers nums1[i] and nums2[j] such that:

nums1[i] == nums2[j], and
the line we draw does not intersect any other connecting (non-horizontal) line.
Note that a connecting line cannot intersect even at the endpoints (i.e., each number can only belong to one connecting line).

Return the maximum number of connecting lines we can draw in this way.
*/
class Solution {
public:
    int c(vector<int>&v1,vector<int>&v2,int i,int j,vector<vector<int>>&dp){
        if(i>=v1.size() || j>=v2.size())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=0;
        if(v1[i]==v2[j]){
            ans=1+c(v1,v2,i+1,j+1,dp);
        }
        ans=max({ans,c(v1,v2,i+1,j,dp),c(v1,v2,i,j+1,dp)});
        dp[i][j]=ans;
        return ans;
    }
    int maxUncrossedLines(vector<int>&v1, vector<int>& v2) {
        vector<vector<int>>dp(v1.size(),vector<int>(v2.size(),-1));
        return c(v1,v2,0,0,dp);
    }
};
