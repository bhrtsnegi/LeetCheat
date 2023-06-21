/*
Balanced strings are those that have an equal quantity of 'L' and 'R' characters.

Given a balanced string s, split it into some number of substrings such that:

Each substring is balanced.
Return the maximum number of balanced strings you can obtain.
*/
class Solution {
public:
    int balancedStringSplit(string s) {
        int numR=0, numL=0, count=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='L')
                numL++;
            else
                numR++;
            if(numL==numR)
            {
                count++;
                numL=0;
                numR=0;
            }
        }
        return count;
    }
};
