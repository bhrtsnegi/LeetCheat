/*
Given a positive integer num, return the number of positive integers less than or equal to num whose digit sums are even.

The digit sum of a positive integer is the sum of all its digits.
*/

class Solution {
public:
    int countEven(int num) {
        int count=0, n, sum=0;
        while(num!=1)
        {
            n=num;
            while(n!=0)
            {
                sum+=n%10;
                n=n/10;
            }
            if(sum%2==0)
            {
                count++;
            }
            sum=0;
            num--;
        }
        return count;
    }
};
