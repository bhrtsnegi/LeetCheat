/*
You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.

For each index i, names[i] and heights[i] denote the name and height of the ith person.

Return names sorted in descending order by the people's heights.
*/

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int max;
        for(int i=0; i<names.size()-1; i++)
        {
            max=i;
            for(int j=i+1; j<names.size(); j++)
            {
                if(heights[max]<heights[j])
                {
                    max=j;
                }
            }
            swap(names[max], names[i]);
            swap(heights[max], heights[i]);
        }
        return names;
    }
};
