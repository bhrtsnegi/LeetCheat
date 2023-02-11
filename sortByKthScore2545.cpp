/*
There is a class with m students and n exams. You are given a 0-indexed m x n integer matrix score, 
where each row represents one student and score[i][j] denotes the score the ith student got in the jth exam. 
The matrix score contains distinct integers only.
*/

class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>> result;
        int max=0, point, i=0;
        for(int j=0; j<size(score); j++)
        {
            for(int i=0; i<size(score); i++)
            {
                if(max<score[i][k])
                {
                    max=score[i][k];
                    point= i;
                }
            }
            
                for(int j=0; i<score[i].size(); j++)
                {
                    result[i][j]=score[point][j];
                }
                i++;
            score[j][point]=0;
            max=0;
        }
        return result;
    }
};