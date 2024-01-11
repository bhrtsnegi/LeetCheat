/*
You are given a 0-indexed array nums consisting of positive integers.

There are two types of operations that you can apply on the array any number of times:

Choose two elements with equal values and delete them from the array.
Choose three elements with equal values and delete them from the array.
Return the minimum number of operations required to make the array empty, or -1 if it is not possible.
*/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> myMap;
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
            myMap[nums[i]]++;

        for(auto it : myMap){
            if(it.second == 1)  return -1;
            count+=it.second/3;
            if(it.second%3) count++;
        }

        return count;
    }
};
