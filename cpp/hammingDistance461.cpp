/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, return the Hamming distance between them.
*/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        if(x>y)
        {
            while(x!=0)
            {
                if(x%2!=y%2)
                    count++;
                x/=2;
                y/=2;
            }    
        }
        else
        {
            while(y!=0)
            {
                if(x%2!=y%2)
                    count++;
                x/=2;
                y/=2;
            } 
        }
        return count;
    }
};
