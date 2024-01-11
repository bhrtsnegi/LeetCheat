/*
Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0, temp=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
                count=0;
            } 
            else 
            {
                count++;
                temp=count;
            }
        }
        return temp;
    }
};
