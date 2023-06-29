/*
You are given an integer array matches where matches[i] = [winneri, loseri] 
indicates that the player winneri defeated player loseri in a match.

Return a list answer of size 2 where:

answer[0] is a list of all players that have not lost any matches.
answer[1] is a list of all players that have lost exactly one match.
The values in the two lists should be returned in increasing order.

Note:

You should only consider the players that have played at least one match.
The testcases will be generated such that no two matches will have the same outcome.
*/

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> winner;
        map<int, int> loser;
        
        for(int i=0; i<matches.size(); i++)
        {
            winner[matches[i][0]]++;
            loser[matches[i][1]]++;
        }
        vector<vector<int>> sol;
        vector<int>arr;
        for(auto i:winner)
        {
            if(loser[i.first]>0)
                continue;
            else
                arr.push_back(i.first);
        }
        sol.push_back(arr);
        arr.clear();
        for(auto i: loser)
        {
            if(i.second==1)
                arr.push_back(i.first);
        }
        sol.push_back(arr);

        return sol;
    }
};
