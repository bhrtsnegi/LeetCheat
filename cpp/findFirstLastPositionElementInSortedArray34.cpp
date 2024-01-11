/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> sol;
        int ub=nums.size()-1;
        int lb=0, mid, count=0;

        while(lb<=ub)
        {
            mid=(ub+lb)/2;
            if(nums[mid]==target)
            {
                count++;
                break;
            }
            else if(target>nums[mid])
            {
                lb=mid+1;
            }
            else
            {
                ub=mid-1;
            }
        }
        if(count==0)
        {
            sol.push_back(-1);
            sol.push_back(-1);
        }      
        else
        {
            int k=mid;
            while(target==nums[k])
            {
                if(k==0)
                {
                    k--;
                    break;
                }
                k--;
            }
            k++;
            sol.push_back(k);
            k=mid;
            while(target==nums[k])
            {
                if(k==nums.size()-1)
                {
                    k++;
                    break;
                }
                k++;
            }
            k--;
            sol.push_back(k);
        }
        return sol;
    }
};
