/*
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth=0, i=0, j=0, total=0;
        while(i<size(accounts))
        {
            // if(j<size(accounts[i]))
            // {
            wealth= wealth + accounts[i][j];
            // }
            if(j==size(accounts[i])-1)
            {
                j=-1;
                i=i+1;
                if(wealth>total)
                {
                    total= wealth;
                }
                wealth=0;
                
            }
            j++;
        }
        return total;
    }
};