/*
Write an algorithm to determine if a number n is happy.
A happy number is a number defined by the following process:
Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.
*/

class Solution {
public:
    bool isHappy(int n) {
        int sum=0, num=n;
        while(num>0)
        {
            n=num;
            num=0;
            while(n>0)
            {
                num+=(pow(n%10,2));
                n=n/10;
            }
            if(num<10)
            {
                if(num==1 || num==7)
                    return true;
                else
                    return false;
            }
        }
        return true;
    }
};
