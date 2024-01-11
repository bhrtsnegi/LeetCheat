/*
You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

Return true if a and b are alike. Otherwise, return false.
*/

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size()/2;
        int count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                count1++;
            if(s[n+i]=='a'||s[n+i]=='e'||s[n+i]=='i'||s[n+i]=='o'||s[n+i]=='u'||s[n+i]=='A'||s[n+i]=='E'||s[n+i]=='I'||s[n+i]=='O'||s[n+i]=='U')
                count2++;
        }
        if(count1==count2)
            return 1;
        return 0;
    }
};
