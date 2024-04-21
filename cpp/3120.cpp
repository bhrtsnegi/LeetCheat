/*
You are given a string word. A letter is called special if it appears both in lowercase and uppercase in word.

Return the number of special letters in word.
*/

class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count=0;
        unordered_set<char>s;
        for(int i=0;i<word.length();i++){
            s.insert(word[i]);
        }
        for(char c:s){
            if(s.find(c+32)!=s.end())count++;
        }
        return count;
    }
};
