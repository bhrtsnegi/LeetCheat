/*
You are given an integer total indicating the amount of money you have. You are also given two integers cost1 and cost2 indicating the price of a pen and pencil respectively. You can spend part or all of your money to buy multiple quantities (or none) of each kind of writing utensil.

Return the number of distinct ways you can buy some number of pens and pencils.
*/

class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long count=0;
        int n;
        if(total<cost1 && total<cost2)
            return 1;
        // considering cost 1 always greater
        if(cost1<cost2)
            swap(cost1, cost2);
        
        // total number of possible outcomes for cost1
        n= total/cost1 + 1;

        //looping for cost2
        for(int i=0; i<n; i++)
        {
            count+=total/cost2+1;
            total-=cost1;
        }
        
        return count;
    }
};
