/*
You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.

You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the following:

An integer x.
Record a new score of x.
'+'.
Record a new score that is the sum of the previous two scores.
'D'.
Record a new score that is the double of the previous score.
'C'.
Invalidate the previous score, removing it from the record.
Return the sum of all the scores on the record after applying all the operations.

The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that all operations are valid.
*/

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        int sum=0,k=0;
        for(int i=0; i<operations.size(); i++)
        {
            if(operations[i]=="+")
            {
                record.push_back(record[k-1]+record[k-2]);
                k++;
            }     
            else if(operations[i]=="D")
            {
                record.push_back(record[k-1]*2);
                k++;
            }    
            else if(operations[i]=="C")
            {
                record.pop_back();
                k--;
            }         
            else
            {
                record.push_back(stoi(operations[i]));
                k++;
            }      
        }
        for(int i=0; i<record.size(); i++)
            sum+=record[i];
        return sum;
    }
};
