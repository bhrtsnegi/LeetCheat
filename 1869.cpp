/*
Given a binary string s, 
return true if the longest contiguous segment of 1's is strictly longer than the longest contiguous segment of 0's in s, 
or return false otherwise.

For example, in s = "110100010" the longest continuous segment of 1s has length 2, and the longest continuous segment of 0s has length 3.
Note that if there are no 0's, then the longest continuous segment of 0's is considered to have a length 0. The same applies if there is no 1's.
*/

class Solution {
public:
    bool checkZeroOnes(string s) {
        int maxZero=0;
        int maxOne=0;
        int countOne=0;
        int countZero=0;
        for(int i=0; i<s.size(); i++)
        {
            while(s[i]=='1')
            {
                countOne++;
                i++;
            }
            while(s[i]=='0')
            {
                countZero++;
                i++;
            }
            if(maxOne<countOne) maxOne=countOne;
            if(maxZero<countZero) maxZero=countZero;
            countOne=countZero=0;
            i--;
        }
        if(maxOne>maxZero) return true;
        else return false;
    }
};
