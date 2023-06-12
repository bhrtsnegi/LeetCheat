/*
You are given a sorted unique integer array nums.

A range [a,b] is the set of all integers from a to b (inclusive).

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. 
That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

Each range [a,b] in the list should be output as:

"a->b" if a != b
"a" if a == b
*/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        string s="";
        vector<string> sol;
        if(nums.size()==1)
        {
            sol.push_back(to_string(nums[0]));
            return sol;
        }
        else if(nums.size()==0)
            return sol;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]+1==nums[i+1])
            {
                if(s=="")
                    s=to_string(nums[i]);
                else
                    continue;
            }
            else
            {
                if(s!="")
                {
                    s=s+"->" + to_string(nums[i]);
                    sol.push_back(s);
                    s="";
                }
                else
                sol.push_back(to_string(nums[i]));
            }
        }
        if(s!="")
        {
            s=s+"->" + to_string(nums[nums.size()-1]);
            sol.push_back(s);
            s="";
        }
        else
            sol.push_back(to_string(nums[nums.size()-1]));
        return sol;
    }
};
