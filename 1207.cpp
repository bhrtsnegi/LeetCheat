/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
*/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> myMap;
        for(auto val:arr){
            myMap[val]++; 
        }

        unordered_set<int> s;
        for(auto val:myMap){
            s.insert(val.second);
        }

        if(myMap.size() == s.size()){
            return true;
        }

        return false;
    }
};
