/*
A shop is selling candies at a discount. For every two candies sold, the shop gives a third candy for free.

The customer can choose any candy to take away for free as long as the cost of the chosen candy is less than or equal to the minimum cost of the two candies bought.

For example, if there are 4 candies with costs 1, 2, 3, and 4, and the customer buys candies with costs 2 and 3,
they can take the candy with cost 1 for free, but not the candy with cost 4.
Given a 0-indexed integer array cost, where cost[i] denotes the cost of the ith candy, return the minimum cost of buying all the candies.
*/
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int sum=0;
        sort(cost.begin(), cost.end());
       for(int i=cost.size()-1; i>=0; i=i-3)
       {
           if(i<2)
           {
               int j=0;
               while(j!=i+1)
               {
                   sum+=cost[j];
                   j++;
               }
               i=-1;
           }
           else
           sum+=(cost[i]+cost[i-1]);
       }
       return sum;
    }
};
