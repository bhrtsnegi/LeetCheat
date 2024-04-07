/*
Given a string s containing only three types of characters: '(', ')' and '*', return true if s is valid.

The following rules define a valid string:

Any left parenthesis '(' must have a corresponding right parenthesis ')'.
Any right parenthesis ')' must have a corresponding left parenthesis '('.
Left parenthesis '(' must go before the corresponding right parenthesis ')'.
'*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".
*/

class Solution {
public:
    bool checkValidString(string s) {
        stack<int> left, star;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') left.push(i);
            else if(s[i] == '*') star.push(i);
            else{
                if(!left.empty()) left.pop();
                else if(!star.empty()) star.pop();
                else return false;
            }
        }
        while(left.size()!=0){
            if(star.size() == 0) return false;
            if(star.top()> left.top()) {
                star.pop();
                left.pop();
            }else{
            return false;
        }}
        return true;
    }
};
