/*
You are given an array of positive integers nums and want to erase a subarray containing unique elements. The score you get by erasing the subarray is equal to the sum of its elements.

Return the maximum score you can get by erasing exactly one subarray.

An array b is called to be a subarray of a if it forms a contiguous subsequence of a, that is, if it is equal to a[l],a[l+1],...,a[r] for some (l,r).
*/

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int right = 0, left = 0, maxi = 0, sol = 0;
        unordered_map<int, int> myMap;
        while(right < nums.size()){
            myMap[nums[right]]++;
            sol = max(sol, maxi);
            while(myMap[nums[right]] == 2){
                maxi-=nums[left];
                myMap[nums[left]]--;
                if(nums[right] == nums[left++]) break;
            }
            maxi+=nums[right];
            right++;
        }
        return max(maxi, sol);
    }
};
