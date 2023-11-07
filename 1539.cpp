/*
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.
*/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=1;
        int count=0;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]==n)
            {
                n++;
            }
            else
            {
                while(arr[i]!=n)
                {
                    count++;
                    if(k==count) return n;
                    n++;
                }
                n++;
            }
        }
        if(count<k)
        {
            return n+(k-count)-1;
        }
        return -1;
    }
};
