/*
You are given an array of unique integers salary where salary[i] is the salary of the ith employee.
Return the average salary of employees excluding the minimum and maximum salary. Answers within 10-5 of the actual answer will be accepted.
*/

class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double sum=0;
        for(int i=1; i<salary.size()-1; i++)
        {
            sum+=salary[i];
        }
        return (sum/(salary.size()-2));
    }
};
