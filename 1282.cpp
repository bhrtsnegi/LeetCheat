/*
There are n people that are split into some unknown number of groups. Each person is labeled with a unique ID from 0 to n - 1.

You are given an integer array groupSizes, where groupSizes[i] is the size of the group that person i is in. For example, if groupSizes[1] = 3, then person 1 must be in a group of size 3.

Return a list of groups such that each person i is in a group of size groupSizes[i].

Each person should appear in exactly one group, and every person must be in a group. If there are multiple answers, return any of them. It is guaranteed that there will be at least one valid solution for the given input.
*/

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
        vector<vector<int>> result;
        vector<vector<int>> myMap(n+1);
        for(int i=0; i<n; i++)
        {
            int L=groupSizes[i];
            myMap[L].push_back(i);
            if(myMap[L].size()==L)
            {
                result.push_back(myMap[L]);
                myMap[L]={};
            }
        }
    return result;
    }
};
