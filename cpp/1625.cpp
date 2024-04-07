/*
You are given a string s of even length consisting of digits from 0 to 9, and two integers a and b.

You can apply either of the following two operations any number of times and in any order on s:

Add a to all odd indices of s (0-indexed). Digits post 9 are cycled back to 0. For example, if s = "3456" and a = 5, s becomes "3951".
Rotate s to the right by b positions. For example, if s = "3456" and b = 1, s becomes "6345".
Return the lexicographically smallest string you can obtain by applying the above operations any number of times on s.

A string a is lexicographically smaller than a string b (of the same length) if in the first position where a and b differ, string a has a letter that appears earlier in the alphabet than the corresponding letter in b. For example, "0158" is lexicographically smaller than "0190" because the first position they differ is at the third letter, and '5' comes before '9'.
*/

class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        queue<string> q;
        q.push(s);
        set<string> mySet;
        string ans = q.front();
        while(!q.empty()){
            string temp = q.front();
            ans = min(ans,temp);
            q.pop();
            string add=temp;
            for(int i=1;i<add.size();i+=2){
                int x = add[i]-'0';
                x = (x+a)%10;
                add[i] = x+'0';
            }
            if(mySet.find(add)==mySet.end()){
                mySet.insert(add);
                q.push(add);
            }
            string str2 = temp.substr(0,temp.size()-b);
            string str1 = temp.substr(temp.size()-b);
            string rotate = str1+str2;
            if(mySet.find(rotate)==mySet.end()){
                mySet.insert(rotate);
                q.push(rotate);
            }
        }
        return ans;
    }
};
