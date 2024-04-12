/*
The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.
*/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        int ans=-1;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            for(int j=i+1;j<nums2.size();j++)
            {
                if(nums2[j]>nums2[i]) 
                {
                    ans=nums2[j]; break;
                }
            }
            mp[nums2[i]]=ans;
            ans=-1;
        }
        vector<int>sol;
        for(auto value:nums1)
        {
            if(mp.find(value)!=mp.end()) 
            {
                auto it = mp.find(value);
                sol.push_back(it->second);
            }
            else 
            {
                sol.push_back(-1);
            }
        }
        return sol;
    }
};
