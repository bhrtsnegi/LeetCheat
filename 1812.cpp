/*
You are given coordinates, a string that represents the coordinates of a square of the chessboard. Below is a chessboard for your reference.
*/

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if(coordinates[0]%2==0 && coordinates[1]%2==0)
        {
            return false;
        }
        else if(coordinates[0]%2==1 && coordinates[1]%2==1)
        {
            return false;
        }
        else
        {
            return true;
        }
        return true;
    }
};
