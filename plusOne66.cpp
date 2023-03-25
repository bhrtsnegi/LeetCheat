/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        int num=0;
        for(int i=0; i<digits.size(); i++)
        {
            num=num*pow(10,i)+ digits[i];
        }
        num=num+1;
        int i=0;
        while(num!=0)
        {
            result.push_back(num%10);
        }
        return result;
    }
};
