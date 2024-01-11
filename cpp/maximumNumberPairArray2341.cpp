/*
You are given a 0-indexed integer array nums. In one operation, you may do the following:

Choose two integers in nums that are equal.
Remove both integers from nums, forming a pair.
The operation is done on nums as many times as possible.

Return a 0-indexed integer array answer of size 2 where answer[0] is the number of pairs that are formed and answer[1] is the number of leftover integers in nums after doing the operation as many times as possible.
*/

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int count=0, num=0;
        vector <int> answer;
        for(int i=0; i<size(nums); i++)
        {
            for(int j=i+1; j<size(nums); j++)
            {
                if(nums[i]==-1)
                {
                    break;
                }
                else if(nums[i]==nums[j])
                {
                    count++;
                    nums[i]=-1;
                    nums[j]=-1;
                    break;
                }
            }
        }
        
        answer.push_back(count);
        count=0;
        for(int i=0; i<size(nums); i++)
        {
            if(nums[i]>=0)
            {
                num++;
            }
        }
        answer.push_back(num);
        return answer;

    }
};