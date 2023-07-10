/*
Given a string s consisting of lowercase English letters, return the first letter to appear twice.

Note:

A letter a appears twice before another letter b if the second occurrence of a is before the second occurrence of b.
s will contain at least one letter that appears twice.
*/

class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> myMap;
        for(int i=0; i<s.size(); i++)
        {
            myMap[s[i]]++;
            if(myMap[s[i]]==2) return s[i];
        }
        return 0;
    }
};
