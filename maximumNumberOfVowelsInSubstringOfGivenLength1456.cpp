/*
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.
Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.
*/

class Solution {
public:
    int maxVowels(string s, int k) {
        int max=0, count=0;
        for(int i=0; i<k; i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            count++;
        }
        max=count;
        int i=0;
        while(k<s.size())
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                count--;
            if(s[k]=='a' || s[k]=='e' || s[k]=='i' || s[k]=='o' || s[k]=='u')
                count++;
            i++;
            k++;
            if(count>max)   max=count;
        }
        return max;
    }
};
