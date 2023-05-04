/*
In the world of Dota2, there are two parties: the Radiant and the Dire.

The Dota2 senate consists of senators coming from two parties. Now the Senate wants to decide on a change in the Dota2 game. 
The voting for this change is a round-based procedure. In each round, each senator can exercise one of the two rights:

Ban one senator's right: A senator can make another senator lose all his rights in this and all the following rounds.
Announce the victory: 
If this senator found the senators who still have rights to vote are all from the same party, he can announce the victory 
and decide on the change in the game.
Given a string senate representing each senator's party belonging. The character 'R' and 'D' represent the Radiant party and the Dire party. 
Then if there are n senators, the size of the given string will be n.

The round-based procedure starts from the first senator to the last senator in the given order. 
This procedure will last until the end of voting. All the senators who have lost their rights will be skipped during the procedure.

Suppose every senator is smart enough and will play the best strategy for his own party. 
Predict which party will finally announce the victory and change the Dota2 game. The output should be "Radiant" or "Dire".
*/
class Solution {
public:
    string predictPartyVictory(string senate) {
        //creating two queues qr and qd and pushing index of the position of R and D in qr and qd respectively
        queue<int> qr, qd;
        int n = senate.length();

        for(int i = 0; i<n; i++)
            (senate[i] == 'R')?qr.push(i):qd.push(i);

        //if any of the queue is empty the loop will terminate
        //else it will take the front elements of both the queues qr and qd, compare them and then push (n+front element of the ther queue which has small front element) to the queue which has greater front element
        while(!qr.empty() && !qd.empty()){
            int r_id = qr.front(), d_id = qd.front();
            qr.pop(), qd.pop();
            (r_id < d_id)?qr.push(r_id + n):qd.push(d_id + n);
        }
        
        //return 'Radiant' if it has more elements and 'Dire' otherwise 
        return (qr.size() > qd.size())? "Radiant" : "Dire";
    }
};
