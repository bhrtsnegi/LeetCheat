/*

Given an integer num, return the number of digits in num that divide num.

An integer val divides nums if nums % val == 0.

*/

class Solution {
public:
    int countDigits(int num) {
        int val, n=num, count=0;
        while(n!=0)
        {
            val=n%10;
            if(num%val==0)
            {
                count++;
            }
            n=n/10;
        }
        return count;
    }
};
