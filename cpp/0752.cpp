/*
You have a lock in front of you with 4 circular wheels. Each wheel has 10 slots: '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'. The wheels can rotate freely and wrap around: for example we can turn '9' to be '0', or '0' to be '9'. 
Each move consists of turning one wheel one slot.

The lock initially starts at '0000', a string representing the state of the 4 wheels.

You are given a list of deadends dead ends, meaning if the lock displays any of these codes, the wheels of the lock will stop turning and you will be unable to open it.

Given a target representing the value of the wheels that will unlock the lock, return the minimum total number of turns required to open the lock, or -1 if it is impossible.
*/

class Solution {
public:

    char turnRight(char c){
        return (c == '9' ? '0' : c+1);
    }

    char turnLeft(char c){
        return (c == '0' ? '9' : c-1);
    }

    vector<string> nextOptions(string s){
        vector<string> ans;
        for(int i = 0; i < 4; i++){
            string copy = s;
            copy[i] = turnRight(s[i]);
            ans.push_back(copy);
            copy[i] = turnLeft(s[i]);
            ans.push_back(copy);
        }

        return ans;
    }
    int openLock(vector<string>& deadends, string target) {
        queue<string> q;
        unordered_map<string, bool> vis;
        q.push("0000");
        vis["0000"] = true;
        int level = 0;
        unordered_set<string> deadendSet(deadends.begin(), deadends.end());
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                string s = q.front();
                q.pop();

                if(s == target) return level;
                if(deadendSet.find(s) != deadendSet.end()) continue;

                for(string option : nextOptions(s)){
                    if(!vis[option]){
                        q.push(option);
                        vis[option] = true;
                    }
                }
            }
            level++;
        }
        return -1;
    }
};
