/*
An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return true if n is an ugly number.
*/

class Solution {
public:
    bool isUgly(int n) {
        int temp;
        while(n!=1)
        {
            if(n<=0)
            {
                return false;
            }
            else if(n%2==0)
            {
                n=n/2;
            }
            else if(n%3==0)
            {
                n=n/3;
            }
            else if(n%5==0)
            {
                n=n/5;
            }
            else
            {
                temp=1;
                return false;
            }
        }
        if(temp==0)
        {
            return true;
        }
        return true;
    }
};
