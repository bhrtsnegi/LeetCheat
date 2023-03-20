/*
You are given an integer array nums consisting of 2 * n integers.
You need to divide nums into n pairs such that:

Each element belongs to exactly one pair.
The elements present in a pair are equal.
Return true if nums can be divided into n pairs, otherwise return false.
*/

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int flag=0, count=0;
        for(int i=0; i<size(nums)-1; i++)
        {
            if(nums[i]==0)
            {
                continue;
            }
            for(int j=i+1; j<size(nums); j++)
            {
                if(nums[j]==0)
                {
                    continue;
                }
                if(nums[i]==nums[j])
                {
                    flag++;
                    nums[i]=0;
                    nums[j]=0;
                    break;
                }
            }
            if(flag>0)
            {
                flag=0;
                continue;
            }
            else
            {
                count++;
                break;
            }
        }
        if(count!=0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
