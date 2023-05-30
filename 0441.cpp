/*
You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
Given the integer n, return the number of complete rows of the staircase you will build.
*/

class Solution {
public:
    int arrangeCoins(int n) {
        int count=0, i=1; 
        long long sum=0;
        while(sum<n)
        {
            sum+=i;
            i++;
            count++;
        }
        if(sum!=n)
        {
            count--;
        }
        return count;
    }
};
