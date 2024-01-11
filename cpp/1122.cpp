/*
Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.
Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2. 
Elements that do not appear in arr2 should be placed at the end of arr1 in ascending order.
*/

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> sol;
        vector<int> res;
        for(int i=0; i<arr1.size(); i++)
            sol[arr1[i]]++;
        for(int i=0; i<arr2.size(); i++)
        {
            for(int j=0; j<sol[arr2[i]]; j++)
            {
                res.push_back(arr2[i]);
            }
            sol.erase(arr2[i]);
        }
        for(auto i: sol)
            for(int j=0; j<i.second; j++)
                res.push_back(i.first);
        return res;
    }
};
