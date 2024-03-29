/*
The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

countAndSay(1) = "1"
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
To determine how you "say" a digit string, split it into the minimal number of substrings such that each substring contains exactly one unique digit. Then for each substring, say the number of digits, then say the digit. Finally, concatenate every said digit.

For example, the saying and conversion for digit string "3322251":


Given a positive integer n, return the nth term of the count-and-say sequence.


*/

class Solution {
public:
    string countAndSay(int n) {
        if(n==1)    return "1";
        string result="";
        string s = countAndSay(n-1);

        int counter = 0;

        for(int i=0; i<s.length(); i++)
        {
            counter++;
            if(i == s.length()-1 || s[i] != s[i+1])
            {
                result = result + to_string(counter) + s[i];
                counter = 0;
            }
        }
        return result;
    }
};
