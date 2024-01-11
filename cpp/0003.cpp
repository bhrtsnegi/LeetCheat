/*
Given a string s, find the length of the longest substring without repeating characters.

*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        int r=0,l=0;
        vector<int> myMap(256,-1);
        while(r<s.size())
        {
            if(myMap[s[r]]!=-1)
                l=max(myMap[s[r]]+1,l);
            myMap[s[r]]=r;
            count=max(count, r-l+1);
            r++;
        }
        return count;
    }
};
