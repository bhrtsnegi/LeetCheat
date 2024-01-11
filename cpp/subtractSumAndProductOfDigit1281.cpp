/*
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1, sum=0, val;
        while(n!=0)
        {
            val= n%10;
            prod= prod*val;
            sum= sum+val;
            n=n/10;
        }
        return (prod-sum);      
    }
};