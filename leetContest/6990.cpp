/*
Initially, you have a bank account balance of 100 dollars.

You are given an integer purchaseAmount representing the amount you will spend on a purchase in dollars.

At the store where you will make the purchase, the purchase amount is rounded to the nearest multiple of 10. In other words, you pay a non-negative amount, roundedAmount, such that roundedAmount is a multiple of 10 and abs(roundedAmount - purchaseAmount) is minimized.

If there is more than one nearest multiple of 10, the largest multiple is chosen.

Return an integer denoting your account balance after making a purchase worth purchaseAmount dollars from the store.

Note: 0 is considered to be a multiple of 10 in this problem.
*/

class Solution {
public:
    int accountBalanceAfterPurchase(int p) {
        int x=0;
        if(p%10==0)
            return 100-p;
        else if(p%5==0)
        {
            x=100-p;
            return x-5;
        }
        else if(p%10<5)
        {
            x=100-p;
            x=x+(p%10);
        }
        else
        {
            x=100-p;
            x=x-(x%10);
        }
        return x;
    }
};
