/*
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.
*/

class Solution {
public:
    string reverseWords(string s) {
        vector <string> v;
        for(int i=0;i<s.length();i++){
            string x="";
            if(s[i]!=' '){
                x+=s[i++];
            
                while((s[i]!=' ') && i<s.length()){
                    x+=s[i];
                    i++;
                }
                v.push_back(x);
            }
        }
        string ans="";
        for(int i=v.size()-1;i>=0;i--){
            ans+=v[i];
            if(i!=0)
                ans+=" ";
        }
        return ans;

    }
};
