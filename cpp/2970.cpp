/*
You are given a 0-indexed array of positive integers nums.

A subarray of nums is called incremovable if nums becomes strictly increasing on removing the subarray. For example, the subarray [3, 4] is an incremovable subarray of [5, 3, 4, 6, 7] because removing this subarray changes the array [5, 3, 4, 6, 7] to [5, 6, 7] which is strictly increasing.

Return the total number of incremovable subarrays of nums.

Note that an empty array is considered strictly increasing.

A subarray is a contiguous non-empty sequence of elements within an array.
*/

class Solution {
public:
    bool check(vector<int> checkNum){
        for(int i=1; i<checkNum.size(); i++)
            if(checkNum[i]<=checkNum[i-1])  return false;
        return true;
    }
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int sol = 0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                vector<int> checkNum;
                for(int k=0; k<i; k++)  checkNum.push_back(nums[k]);
                for(int k=j+1; k<n; k++)    checkNum.push_back(nums[k]);

                if(check(checkNum)) sol++;
            }
        }
        return sol;
    }
};
