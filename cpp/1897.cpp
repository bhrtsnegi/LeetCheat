/*
You are given an array of strings words (0-indexed).

In one operation, pick two distinct indices i and j, where words[i] is a non-empty string, and move any character from words[i] to any position in words[j].

Return true if you can make every string in words equal using any number of operations, and false otherwise.
*/

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> map;
        for(auto it:words){
            for(auto i:it){
                map[i]++;
            }
        }
        int n = words.size();
        for(auto it:map){
            if(it.second % n== 0)continue;
            else return false;
        }
        return true;
    }
};
