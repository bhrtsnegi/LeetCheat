/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char>br;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
                br.push(s[i]);
            else if(br.empty() ||
            s[i]=='}' && br.top()!='{' ||
            s[i]==')' && br.top()!='(' || 
            s[i]==']' && br.top()!='[' )
                return false;
            else
                br.pop();
        }
        if(br.empty())
            return true;
        return false;
    }
};
