/*
Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.
*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> myMap;
        for(int i=0; i<nums.size(); i++)
            if(nums[i]<0) continue;
            else myMap[nums[i]]++;
        int x=1;
        while(myMap.count(x))
            x++;
        return x;
    }
};
