/*
You are given a 0-indexed string num of length n consisting of digits.

Return true if for every index i in the range 0 <= i < n, the digit i occurs num[i] times in num, otherwise return false.
*/

class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int, int> sol;
        for(int i=0; i<num.size();i++)
        {
            
            sol[num[i]-'0']++;
        }
        for(int i=0; i<num.size(); i++)
        {
            if(sol[i]!=num[i]-'0')
            return false;
        }
        return true;
    }
};
