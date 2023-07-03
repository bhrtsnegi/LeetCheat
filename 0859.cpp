/*
Given two strings s and goal, return true if you can swap two letters in s so the result is equal to goal, otherwise, return false.

Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at s[i] and s[j].

For example, swapping at indices 0 and 2 in "abcd" results in "cbad".
*/

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        unordered_map<char, char> myMap;
        unordered_map<char, int> adding;
        int flag=0, count=0; 
        if(s.size()!=goal.size())   return false;
        for(int i=0; i<s.size(); i++)
        {
            adding[s[i]]++;
            if(s[i]!=goal[i])
            {
                count++;
                myMap[s[i]]=goal[i];
            }
            if(adding[s[i]]>1)
            {
                flag=1;
            }
        }
        if(count==0)
            if(flag==1) return true;
            else return false;
        if(count>2)
            return false;
        else
            for(auto i: myMap)
            {
                if(i.first==myMap[i.second])
                    return true;
                else return false;
            }
        return false;
    }
};
