/*
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergeSolution;
        if(intervals.size()==0) return mergeSolution;

        sort(intervals.begin(), intervals.end());
        vector<int> temp = intervals[0];

        for(auto it: intervals){
            if(it[0] <= temp[1]){
                temp[1]= max(it[1], temp[1]);
            }
            else{
                mergeSolution.push_back(temp);
                temp = it;
            }
        }
        mergeSolution.push_back(temp);
        return mergeSolution;
    }
};
