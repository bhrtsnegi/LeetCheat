/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int f=0;
        int l=s.size()-1;
        while(f<l)
        {
            swap(s[f],s[l]);
            f++;
            l--;
        }
    }
};
