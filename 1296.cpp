/*
Given an array of integers nums and a positive integer k, check whether it is possible to divide this array into sets of k consecutive numbers.

Return true if it is possible. Otherwise, return false.
*/
class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k != 0) return false;
        sort(nums.begin(), nums.end());
        map<int,int>myMap;
        for(int i=0;i<nums.size();i++){
            myMap[nums[i]]++;
            if(myMap.size()==k){
                
                for(int j=nums[i];j>nums[i]-k;j--)
                {
                    myMap[j]--;
                    if(myMap[j]==0)
                    myMap.erase(j);
                }
        }
        }
        if(myMap.size())
        return false;
        return true;
    }
};
