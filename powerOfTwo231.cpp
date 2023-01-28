/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int num=n;
        if(n==1)
        {
            return true;
        }
        else if(n%2==1)
        {
            return false;
        }
        else
        {
            while(num>=2 && num%2==0)
            {
                num=num/2;
            }
            if(num==1)
            {
                return true;    
            }
            else
            {
                return false;
            }
        }
    }
};
