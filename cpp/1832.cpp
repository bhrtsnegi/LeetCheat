/*
A pangram is a sentence where every letter of the English alphabet appears at least once.
Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.
*/
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> myMap;
        for(int i=0; i<sentence.size(); i++)
                myMap[sentence[i]]++;
        if(myMap.size()==26)
            return true;

        return false;
    }
};
