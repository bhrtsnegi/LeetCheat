// Question need to be updated here
class Solution {
public:
    int divide(int dividend, int divisor) {
        int count=0;
        int num=0;
        if(dividend==INT_MIN && divisor==1)
            return INT_MIN;
        if(dividend==INT_MIN && divisor==-1)
            return INT_MAX;
        
        long int dvd= abs(dividend);
        long int div= abs(divisor);
        while(div+num<=dvd)
            {
                count++;
                num=div+num;
            }
        
        if((dividend>0 && divisor>0) || (dividend<0 && divisor<0))
        {
            return count;
        }
        else
        {
            return -count;
        }
    }
};
