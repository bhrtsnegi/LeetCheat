/*
Given an m x n matrix board where each cell is a battleship 'X' or empty '.', return the number of the battleships on board.

Battleships can only be placed horizontally or vertically on board. 
In other words, they can only be made of the shape 1 x k (1 row, k columns) or k x 1 (k rows, 1 column), 
where k can be of any size. At least one horizontal or vertical cell separates between two battleships (i.e., there are no adjacent battleships).
*/

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int ans = 0;
        int m = board.size();
        int n = board[0].size();

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] == 'X'){
                    if(i == 0 && j ==0){
                        ans++;
                    }else if(i == 0){
                        if(board[i][j-1] != 'X') ans++;
                    }else if(j == 0){
                        if(board[i-1][j] != 'X') ans++;
                    }else{
                        if(board[i-1][j] != 'X' && board[i][j-1] != 'X') ans++;
                    }
                }
            }
        }
        return ans;
    }
};
