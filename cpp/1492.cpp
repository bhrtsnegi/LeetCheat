/*
You are given two positive integers n and k. A factor of an integer n is defined as an integer i where n % i == 0.

Consider a list of all factors of n sorted in ascending order, return the kth factor in this list or return -1 if n has less than k factors.
*/

class Solution {
public:
    int kthFactor(int n, int k) {
        k--;
        if(k==0) return 1;
        for(int i=2; i<=n; i++)
        {
            if(n%i==0)
                k--;
            if(k==0)
                return i;
        }
        return -1;
    }
};
