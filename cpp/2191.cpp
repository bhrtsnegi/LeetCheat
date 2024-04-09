/*
You are given a 0-indexed integer array mapping which represents the mapping rule of a shuffled decimal system. mapping[i] = j means digit i should be mapped to digit j in this system.

The mapped value of an integer is the new integer obtained by replacing each occurrence of digit i in the integer with mapping[i] for all 0 <= i <= 9.

You are also given another integer array nums. Return the array nums sorted in non-decreasing order based on the mapped values of its elements.

Notes:

Elements with the same mapped values should appear in the same relative order as in the input.
The elements of nums should only be sorted based on their mapped values and not be replaced by them.
*/

class Solution {
public:

    int originalNumber(int x, vector<int>& mapping){
        int num = 0;
        int i = 0;
        while(x){
            num += (mapping[x%10]*pow(10, i));
            i++;
            x /=10;
        }
        return num;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        map<long long, vector<int>> myMap;
        int temp = 0;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==0){
                myMap[mapping[nums[i]]].push_back(nums[i]);
                continue;
            }
            temp = originalNumber(nums[i], mapping);
            myMap[temp].push_back(nums[i]);
        }

        for(auto it : myMap){
            for(auto x : it.second){
                ans.push_back(x);
            }
        }
        return ans;
        
    }
};
