/*
Given a binary array nums, you should delete one element from it.

Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.
*/

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int cur=0,pre=0,maxi=0;
        for(int i=0; i<nums.size();++i){
            if(nums[i]) ++cur;
            else{
                pre=cur;
                cur=0;
            }
            maxi=max(maxi,cur+pre);
        }
        return maxi!=nums.size()?maxi:maxi-1;
    }
};
