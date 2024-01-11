/*
A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.

Given an integer n, return true if n is a perfect number, otherwise return false.

*/


class Solution {
public:
    bool checkPerfectNumber(int num) {
        int temp, i=1, sum=0;
        while(i!=num){
            if(num%i==0)
            {
                sum=sum+i;
            }
            i++;
        }
        if(sum==num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
