/*
You are given a positive integer num consisting only of digits 6 and 9.

Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).
*/

class Solution {
public:
    int maximum69Number (int num) {
        vector <int> count;
        while(num!=0)
        {
            count.push_back(num%10);
            num=num/10;
        }
        for(int i=count.size()-1; i>=0; i--)
        {
            if(count[i]==6)
            {
                count[i]=9;
                break;
            }
        }
        for(int i=0; i<count.size(); i++)
        {
            num+=count[i]*pow(10,i);
        }
        return num;
    }
};
