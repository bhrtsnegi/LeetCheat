/*
You are given two strings of the same length s and t. I
n one step you can choose any character of t and replace it with another character.
Return the minimum number of steps to make t an anagram of s.
An Anagram of a string is a string that contains the same characters with a different (or the same) ordering.
*/
class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> sMap;
        int count=0;
        for(int i=0; i<s.size(); i++)
            sMap[s[i]]++;
        for(int i=0; i<t.size(); i++)
            if(sMap[t[i]])
                sMap[t[i]]--;
            else 
                count++;
        return count;
    }
};
