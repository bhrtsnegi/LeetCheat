class Solution {
public:
    int divide(int dividend, int divisor) {
        int count=0;
        int num=0;
        if(divisor>0 && dividend>0)
        {
            while(divisor+num<=dividend)
            {
                count++;
                num=divisor+num;
            }
        }
        else if(divisor<0 && dividend<0)
        {
            divisor= divisor-divisor-divisor;
            dividend=dividend-dividend-dividend;
            while(divisor+num<=dividend)
            {
                count++;
                num=divisor+num;
            }
        }
        else
        {
            if(divisor<0){
            divisor= divisor-divisor-divisor;}
            else{
            dividend=dividend-dividend-dividend;}
            while(divisor+num<=dividend)
            {
                count--;
                num=divisor+num;
            }

        }
        return count;
    }
};
