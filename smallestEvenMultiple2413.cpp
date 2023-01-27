//Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.

class Solution {
public:
    int smallestEvenMultiple(int n) {
        int sum=n;
        if(n%2==0)
        {
            return n;
        }
        else
        {
            while(sum%2!=0)
            {
                sum=sum+n;
            }
            return sum;    
        }
        
    }
};
