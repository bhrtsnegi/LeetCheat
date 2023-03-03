/*
Given a positive integer n, find the pivot integer x such that:

The sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.
Return the pivot integer x. If no such integer exists, return -1. It is guaranteed that there will be at most one pivot index for the given input.
*/

class Solution {
public:
    int pivotInteger(int n) {
        int x=0, sum1=0, sum2=0; 
        if(n==1)
        {
            return 1;
        }
        while(n>=x)
        {
            if(sum1==sum2 && x==n)
            {
                break;
            }
            if(sum1!=sum2 && x==n)
            {
                x=-1;
                break; 
            }
            else if(sum1>sum2)
            {
                sum2=sum2+n;
                n--;
            }
            else
            {
                sum1=sum1+x;
                x++;
                
            }
        }
        return x;
    }
};
