/* 
Given an integer n, return true if it is a power of four. Otherwise, return false
An integer n is a power of four, if there exists an integer x such that n == 4x.
*/


class Solution {
public:
    bool isPowerOfFour(int n) {
        float x=n, count=0;

    if(n==1)
    {
        return true;
    }
    else
    {
        while(x!=1)
        {
            if(x<4)
            {
                count++;
                return false;
            }
            x=x/4;
        }
        if(count==0)
        {
            return true;
        }
    }
    return 0;
    }
};
