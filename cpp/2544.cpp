/*
You are given a positive integer n. Each digit of n has a sign according to the following rules:

The most significant digit is assigned a positive sign.
Each other digit has an opposite sign to its adjacent digits.
Return the sum of all digits with their corresponding sign.
*/

class Solution {
public:
    int alternateDigitSum(int n) {
        int sol=0, count=0;
        int num=n;
        while(num!=0)
        {
            num/=10;
            count++;
        }
        if(count%2==0)
        {
            int i=0;
            while(n!=0)
            {
                if(i%2==0)
                {
                    sol-=n%10;
                }
                else
                {
                    sol+=n%10;
                }
                n/=10;
                i++;
            }

        }
        else
        {
            int i=0;
            while(n!=0)
            {
                if(i%2!=0)
                {
                    sol-=n%10;
                }
                else
                {
                    sol+=n%10;
                }
                n/=10;
                i++;
            }
        }
        return sol;
    }
};
