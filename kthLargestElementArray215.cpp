/*
Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

You must solve it in O(n) time complexity.
*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      sort(nums.begin(), nums.end());
      for(int i=nums.size()-1; i>=0; i--)
      {
          k--;
          if(k==0)
          {
              return nums[i];
          }
      }  
      return 0;
    }
};
