/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int flag=0, k;
        for(int i=0; i<haystack.size(); i++)
        {
            if(haystack[i]!=needle[0]) continue;
            k=i;
            for(int j=0; j<needle.size(); j++)
            {
                if(haystack[k]!=needle[j])
                {
                    flag=1;
                    break;
                }
                k++;
            }
            if(flag==0) return i;
            flag=0;
        }
        return -1;
    }
};
