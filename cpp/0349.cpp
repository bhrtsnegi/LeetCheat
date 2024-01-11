/*
Given two integer arrays nums1 and nums2, return an array of their intersection. 
Each element in the result must be unique and you may return the result in any order.
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> sol;
        vector<int> result;
        for(int i=0; i<nums1.size(); i++)
        {
            if(sol[nums1[i]]!=1)
                sol[nums1[i]]=1;
        }
            
        for(int i=0; i<nums2.size(); i++)
        {
            if(sol[nums2[i]]==1)
            {
                sol[nums2[i]]=2;
                result.push_back(nums2[i]);
            }
        }
        return result;
    }
};
