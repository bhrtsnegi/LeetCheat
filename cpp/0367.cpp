/*
Given a positive integer num, return true if num is a perfect square or false otherwise.

A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.

You must not use any built-in library function, such as sqrt.
*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        int n=1;
        while(num>0)
        {
            num-=n;
            n+=2;
        }
        if (num==0)
            return 1;
        return 0;
    }
};
