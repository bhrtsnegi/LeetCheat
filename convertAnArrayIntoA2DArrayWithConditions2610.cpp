/*
You are given an integer array nums. You need to create a 2D array from nums satisfying the following conditions:

The 2D array should contain only the elements of the array nums.
Each row in the 2D array contains distinct integers.
The number of rows in the 2D array should be minimal.
Return the resulting array. If there are multiple answers, return any of them.

Note that the 2D array can have a different number of elements on each row.
*/

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> solution;
        int maxi=0;
        for(int i=0; i<nums.size(); i++)
        {
            solution[nums[i]]++;
            maxi=max(maxi, solution[nums[i]]);
        }
        vector<int> arr1;
        vector<vector<int>> sol;
        while(maxi>0)
        {
        for(auto i:solution)
        {
            if(i.second>0)
            {
                arr1.push_back(i.first);
                solution[i.first]--;
            }
        }
        maxi--;
        sol.push_back(arr1);
        arr1.clear();
        }
        return sol;
    }
};
