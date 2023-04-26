/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
*/

class Solution {
public:
    int addDigits(int num) {
        int sum;
    do{
        sum=0;
        while(num!=0)
        {
            sum+=(num%10);
            num/=10;
        }
        num=sum;
    }while(sum>9);
        return sum;
    }
};
