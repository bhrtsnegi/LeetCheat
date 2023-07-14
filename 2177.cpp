/*
Given an integer num, return three consecutive integers (as a sorted array) that sum to num. 
If num cannot be expressed as the sum of three consecutive integers, return an empty array.
*/

class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> result;
        if(num%3==0)
        {
            num=num/3;
            result.push_back(num-1);
            result.push_back(num);
            result.push_back(num+1);
        }
        return result;
    }
};
