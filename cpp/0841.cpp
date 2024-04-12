/*
There are n rooms labeled from 0 to n - 1 and all the rooms are locked except for room 0. Your goal is to visit all the rooms. However, you cannot enter a locked room without having its key.

When you visit a room, you may find a set of distinct keys in it. Each key has a number on it, denoting which room it unlocks, and you can take all of them with you to unlock the other rooms.

Given an array rooms where rooms[i] is the set of keys that you can obtain if you visited room i, return true if you can visit all the rooms, or false otherwise.
*/

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), false);
        queue<int> q;
        int n = rooms[0].size();
        for(int i = 0; i < n; i++)  q.push(rooms[0][i]);
        visited[0] = true;
        while(!q.empty()){
            int val = q.front();
            if(!visited[val]){
                for(int i  = 0; i < rooms[val].size(); i++)
                    if(!visited[rooms[val][i]])  q.push(rooms[val][i]);
            visited[val] = true;
            }
            q.pop();
        }
        for(int i = 0; i < visited.size(); i++)
            if(!visited[i]) return false;
        return true;
    }
};
