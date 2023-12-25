/*
You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.
Return the length of the longest substring containing the same letter you can get after performing the above operations.
*/

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> myMap;
        int res = 0;
        int l = 0;
        int maxf = 0;
        for(int i=0; i<s.size();i++){
            myMap[s[i]]++;
            maxf = max(maxf, myMap[s[i]]);
            if( ((i-l+1)-maxf) > k){
                myMap[s[l]]--;
                l++;
            }
            else{
                res = max(res, (i-l+1));
            }
        }
        return res;
    }
};
