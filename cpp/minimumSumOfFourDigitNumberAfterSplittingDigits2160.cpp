/*
You are given a positive integer num consisting of exactly four digits. Split num into two new integers new1 and new2 by using the digits found in num. 
Leading zeros are allowed in new1 and new2, and all the digits found in num must be used.
For example, given num = 2932, you have the following digits: two 2's, one 9 and one 3.
Some of the possible pairs [new1, new2] are [22, 93], [23, 92], [223, 9] and [2, 329].
Return the minimum possible sum of new1 and new2.
*/
class Solution {
public:
    int minimumSum(int num) {
        vector<int> result;
        while(num)
        {
            result.push_back(num%10);
            num=num/10;
        }
        sort(result.begin(),result.end());
        int sum=0;
        sum=(result[0]*10+result[3])+(result[1]*10+result[2]);
        return sum;
    }
};
