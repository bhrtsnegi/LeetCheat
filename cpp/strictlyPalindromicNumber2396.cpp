/*
An integer n is strictly palindromic if, for every base b between 2 and n - 2 (inclusive), the string representation of the integer n in base b is palindromic.

Given an integer n, return true if n is strictly palindromic and false otherwise.

A string is palindromic if it reads the same forward and backward.
*/

class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int b=2, num=n, value, i=0, count=0;
        string str, str1;
        while(b!=n-1)
        {
            while(num!=0)
            {
                value=num%b;
                str.push_back(value);
                num= num/b;
            }
            int len= str.length();
            int val= len-1;
            while(i<len)
            {
                str1[i]= str[val];
                val--;
                i++;
                if(abs(val-i)==0 || abs(val-i)==1)
                {
                    break;
                }
            }
            if(str!=str1)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};