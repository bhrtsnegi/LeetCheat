/*
Given an array of integers arr, a lucky integer is an integer that has a frequency in the array equal to its value.

Return the largest lucky integer in the array. If there is no lucky integer return -1.
*/

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> frequent;
        int maxi=0;
        for(int i=0; i<arr.size(); i++)
        {
            frequent[arr[i]]++;

        }
        for(auto i: frequent)
        {
            if(maxi<i.first)
            {
                if(i.first==i.second)
                {
                    maxi=i.second;
                }
            }
        }
        if(maxi)
            return maxi;
        return -1;
    }
};
