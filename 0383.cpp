/*
Given two strings ransomNote and magazine,
return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.


*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> myMap;
        if(ransomNote.size()==0) return false;
        for(int i=0; i<magazine.size(); i++)
            myMap[magazine[i]]++;
        for(int i=0; i<ransomNote.size(); i++)
        {
            if(myMap[ransomNote[i]]>0)
                myMap[ransomNote[i]]--;
            else
                return false;
        }
        return true;
    }
};
