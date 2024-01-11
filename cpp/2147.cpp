/*
Along a long library corridor, there is a line of seats and decorative plants. You are given a 0-indexed string corridor of length n consisting of letters 'S' and 'P' where each 'S' represents a seat and each 'P' represents a plant.

One room divider has already been installed to the left of index 0, and another to the right of index n - 1. Additional room dividers can be installed. For each position between indices i - 1 and i (1 <= i <= n - 1), at most one divider can be installed.

Divide the corridor into non-overlapping sections, where each section has exactly two seats with any number of plants. There may be multiple ways to perform the division. Two ways are different if there is a position with a room divider installed in the first way but not in the second way.

Return the number of ways to divide the corridor. Since the answer may be very large, return it modulo 109 + 7. If there is no way, return 0.
*/

class Solution {
public:
    #define MOD 1000000007;
    int numberOfWays(string c) {
        long long sol = 1;
        int seat = 0;
        int pot =1;
        for(int i=0; i<c.size(); i++){
            if(c[i]=='S') seat++;
            else if(seat == 2)  pot++;
            if(seat == 3){
                sol = (sol*pot)%MOD;
                seat = 1;
                pot = 1;
            }
        }
        if(seat!=2) return 0;
        return sol%MOD;
    }
};
