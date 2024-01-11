/*
You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.
*/

class Solution {
public:
    string interpret(string command) {
        string str;
        for(int i=0; i<command.size(); i++)
        {
            if(command[i]=='G')
            {
                str.push_back('G');
            }
            else
            {
                if(command[i+1]==')')
                {
                    str.push_back('o');
                    i++;
                }
                    
                else
                {
                    str.push_back('a');
                    str.push_back('l');
                    i+=3;
                }
                    
            }
        }
        return str;
    }
};
