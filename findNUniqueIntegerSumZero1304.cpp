/*
Given an integer n, return any array containing n unique integers such that they add up to 0.
*/

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        if(n==1)
        {
            result.push_back(0);
        }
        else if(n%2==0)
        {   
            for(int i=1; i<=n; i=i+2)
            {
                result.push_back(i);
                result.push_back(-i);
            }
        }
        else
        {
            result.push_back(0);
            for(int i=1; i<n; i=i+2)
            {
                result.push_back(i);
                result.push_back(-i);
            }
        }
        return result;
    }
};