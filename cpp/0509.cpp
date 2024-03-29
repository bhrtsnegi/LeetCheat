/* 
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
Question number 509 in leetcode

*/

class Solution {
public:
    int fib(int n) {
            int n1=0, n2=1, temp;
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        for(int i=1; i!=n; i++)
        {
            temp= n2+n1;
            n1=n2;
            n2= temp;
            if(i==n-1)
            {
                return n2;
            }
        }
    }
    return 0;
    }
};
