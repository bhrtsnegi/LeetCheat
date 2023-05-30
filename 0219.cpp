/*
Given an integer array nums and an integer k, 
return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> sol;
        if(nums.size()==1)  return false;
        for(int i=0; i<nums.size(); i++)
        {
            if(sol.count(nums[i]))
            {
                sol[nums[i]]=abs(sol[nums[i]]-i);
                if(sol[nums[i]]<=k) return true;
            }
            sol[nums[i]]=i;
            
        }
        return false;
    }
};
