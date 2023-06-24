/*
Given a string s, sort it in decreasing order based on the frequency of the characters. 
The frequency of a character is the number of times it appears in the string.
Return the sorted string. If there are multiple answers, return any of them.
*/

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> myMap;
        priority_queue<pair<int, char>> maxElem;
        string sol;
        for(int i=0; i<s.size(); i++)
            myMap[s[i]]++;
        for(auto it: myMap)
            maxElem.push({it.second, it.first});
        while(maxElem.size()>0)
        {
            int count=maxElem.top().first;
            char val=maxElem.top().second;
            while(count!=0)
            {
                sol.push_back(val);
                count--;
            }
            maxElem.pop();
        }
        return sol;
    }
};
