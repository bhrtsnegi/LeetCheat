/*
There are n rings and each ring is either red, green, or blue. The rings are distributed across ten rods labeled from 0 to 9.

You are given a string rings of length 2n that describes the n rings that are placed onto the rods. Every two characters in rings forms a color-position pair that is used to describe each ring where:

The first character of the ith pair denotes the ith ring's color ('R', 'G', 'B').
The second character of the ith pair denotes the rod that the ith ring is placed on ('0' to '9').
For example, "R3G2B1" describes n == 3 rings: a red ring placed onto the rod labeled 3, a green ring placed onto the rod labeled 2, and a blue ring placed onto the rod labeled 1.

Return the number of rods that have all three colors of rings on them.
*/

class Solution {
public:
    int countPoints(string rings) {
        int sol[10][3]={0};
        int res = 0 ;
    
        for(int i = 0 ; i < rings.size() ; i+=2)
        {
            if(rings[i]=='B')
                sol[(rings[i+1]) - '0'][0]=1;
        
            else if(rings[i]=='G')
                sol[rings[i+1]-'0'][1]=1;
        
            else 
                sol[rings[i+1]-'0'][2]=1;
        }
    
    
        for(int i = 0 ; i < 10 ; i++)
        {
            if(sol[i][0]==1 && sol[i][1]==1 && sol[i][2]==1)
                res++;
        }
    
        return res;
    }
};
