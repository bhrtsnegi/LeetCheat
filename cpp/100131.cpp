/*
You are given three strings s1, s2, and s3. You have to perform the following operation on these three strings as many times as you want.

In one operation you can choose one of these three strings such that its length is at least 2 and delete the rightmost character of it.

Return the minimum number of operations you need to perform to make the three strings equal if there is a way to make them equal, otherwise, return -1.
*/

class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n1= s1.length();
        int n2= s2.length();
        int n3= s3.length();
        int count = 0;
        int i=0;
        while(i<n1 && i<n2 && i<n3){
            if(s1[i] == s2[i] && s2[i] == s3[i]) count++;
            else break;
            i++;
        }
        if(count>0)
            return (n1-count) + (n2 - count) + (n3 - count);
        return -1;
    }
};
