/*
At a lemonade stand, each lemonade costs $5. 
Customers are standing in a queue to buy from you and order one at a time (in the order specified by bills). 
Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill. 
You must provide the correct change to each customer so that the net transaction is that the customer pays $5.

Note that you do not have any change in hand at first.

Given an integer array bills where bills[i] is the bill the ith customer pays, 
return true if you can provide every customer with the correct change, or false otherwise.
*/

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> bal;
        for(int i=0;i<bills.size(); i++)
        {
            if(bills[i]==5)
            {
                bal[bills[i]]++;
            }
            else if(bills[i]==10)
            {
                if(bal[5]==0) return false;
                else
                {
                    bal[5]--;
                    bal[10]++;
                }
            }
            else
            {
                if((bal[10]<1 && bal[5]<3) || (bal[10]>0 && bal[5]<1))
                return false;
                else if(bal[10]>0 && bal[5]>0)
                {
                    bal[10]--;
                    bal[5]--;
                }
                else
                {
                    bal[5]=bal[5]-3;
                }
            }
        }
        return true;
    }
};
