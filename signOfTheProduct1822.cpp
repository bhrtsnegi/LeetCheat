/*
There is a function signFunc(x) that returns:

1 if x is positive.
-1 if x is negative.
0 if x is equal to 0.
You are given an integer array nums. Let product be the product of all values in the array nums.

Return signFunc(product).


*/

class Solution {
public:

    int arraySign(vector<int>& nums) {
        int prod=1;
        for(int i=0; i<nums.size(); i++)
        {
            prod*=nums[i];
            if(prod<0)
            {
                prod=-1;
            }
            else if(prod>0)
            {
                prod=1;
            }
            else
            {
                prod=0;
            }
        }
        return prod;
    }
};
