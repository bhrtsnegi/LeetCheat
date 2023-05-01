/*
You are given a positive integer n.
Let even denote the number of even indices in the binary representation of n (0-indexed) with value 1.
Let odd denote the number of odd indices in the binary representation of n (0-indexed) with value 1.
Return an integer array answer where answer = [even, odd].
*/

class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> arr;
        int even=0, odd=0;
        while(n!=1)
        {
            arr.push_back(n%2);
            n/=2;
        }
        arr.push_back(1);
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]==1)
            {
                if(i%2==0)
                    even++;
                else
                    odd++;
            }
        }
        vector<int> num;
        num.push_back(even);
        num.push_back(odd);
        return num;
    }
};
