/*
ou are given a string s and a positive integer k.

Let vowels and consonants be the number of vowels and consonants in a string.

A string is beautiful if:

vowels == consonants.
(vowels * consonants) % k == 0, in other terms the multiplication of vowels and consonants is divisible by k.
Return the number of non-empty beautiful substrings in the given string s.

A substring is a contiguous sequence of characters in a string.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

Consonant letters in English are every letter except vowels.
*/

class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int vowels = 0;
        int consonants = 0;
        int count = 0;
        for(int i=0; i<s.size(); i++){
            vowels = consonants =0;
            for(int j = i; j<s.size(); j++){
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')   vowels++;
                else consonants++;
                if(vowels == consonants && (vowels*vowels)%k==0)    count++;
            }
        }
        return count;
    }
};
