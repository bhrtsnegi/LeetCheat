/*
Given two positive integers a and b, return the number of common factors of a and b.

An integer x is a common factor of a and b if x divides both a and b.
*/

class Solution {
public:
    int commonFactors(int a, int b) {
        int count=1;
        for(int i=2; i<=min(a,b); i++)
        {
            if(a%i==0 && b%i==0)
            count++;
        }
        return count;
    }
};
