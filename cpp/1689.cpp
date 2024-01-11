/*
A decimal number is called deci-binary if each of its digits is either 0 or 1 without any leading zeros. For example, 101 and 1100 are deci-binary, while 112 and 3001 are not.

Given a string n that represents a positive decimal integer, return the minimum number of positive deci-binary numbers needed so that they sum up to n.
*/

class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(char x: n)
        {
            //ascii 48 to 57 0-9
            int curr = x-48;
            ans = max(ans, curr);  
        }
        return ans;
    }
};
