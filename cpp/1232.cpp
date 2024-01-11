/*
You are given an array coordinates, 
coordinates[i] = [x, y], 
where [x, y] represents the coordinate of a point. 
Check if these points make a straight line in the XY plane.
*/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x1,x2,x3;
        int y1,y2,y3;
        sort(coordinates.begin(), coordinates.end());
        for(int i=2; i<coordinates.size(); i++)
        {
            if(
                ((coordinates[i][0]-coordinates[0][0])
                *
                (coordinates[1][1]-coordinates[i][1]))
                !=
                ((coordinates[i][1]-coordinates[0][1])
                *
                (coordinates[1][0]-coordinates[i][0]))
            )   return false;
        }
        return true;
    }
};
