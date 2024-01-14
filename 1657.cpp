/*
Two strings are considered close if you can attain one from the other using the following operations:

Operation 1: Swap any two existing characters.
For example, abcde -> aecdb
Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)
You can use the operations on either string as many times as necessary.

Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.
*/

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())  return false;

        unordered_map<char, int> map1, map2;
        vector<int> arr1, arr2;
        for(int i = 0; i < word1.size(); i++){
            map1[word1[i]]++;
            map2[word2[i]]++;
        }

        for(auto it : map1){
            arr1.push_back(it.second);
            if(map2[it.first]<1) return false;
        }
            

        for(auto it : map2){
            arr2.push_back(it.second);
            if(map2[it.first]<1) return false;
        }

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        for(int i = 0; i < arr1.size(); i++)
            if(arr1[i] != arr2[i])  return false;

        return true;
    }
};
