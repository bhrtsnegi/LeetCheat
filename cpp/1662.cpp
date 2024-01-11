/*
Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.
*/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "", s2 = "";
        int i=0;
        while(i<word1.size() || i<word2.size())
        {
            if(i<word1.size())
                s1+=word1[i];

            if(i<word2.size())
                s2+=word2[i];
            i++;
        }

        if(s1 == s2) return true;

        return false;
    }
};
