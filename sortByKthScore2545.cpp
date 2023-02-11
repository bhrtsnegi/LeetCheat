/*
There is a class with m students and n exams. You are given a 0-indexed m x n integer matrix score, 
where each row represents one student and score[i][j] denotes the score the ith student got in the jth exam. 
The matrix score contains distinct integers only.
*/
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>> result;
        int max=0, point, j=0;
        for(int m=0; m<score[0].size(); m++)
        {
            for(int i=0; i<score[0].size(); i++)
            {
                if(score[i][k]>max)
                {
                    max=score[i][k];
                    point=i;
                }
            }
            for(int i=0; size(score); i++)
            {
                result[j][i]=score[point][i];
            }
            score[point][k]=0;
            max=0;
            j++;
        }
        return result;
    }
};
