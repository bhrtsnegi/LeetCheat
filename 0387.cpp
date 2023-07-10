/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
*/

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> myArray(128, 0);
        for (int i = 0; i < s.size(); i++) {
            myArray[s[i]]++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (myArray[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};
