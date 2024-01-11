/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. 
If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string s;
        while(i<word1.size() || j<word2.size())
        {
            if(i<word1.size())
            {
                s.push_back(word1[i]);
                i++;
            }
                
            if(j<word2.size())
            {
                s.push_back(word2[j]);
                j++;
            }
                
        }
        return s;
    }
};
