/*
You are given an integer finalSum. Split it into a sum of a maximum number of unique positive even integers.

For example, given finalSum = 12, the following splits are valid (unique positive even integers summing up to finalSum): (12), (2 + 10), (2 + 4 + 6), and (4 + 8). Among them, (2 + 4 + 6) contains the maximum number of integers. Note that finalSum cannot be split into (2 + 2 + 4 + 4) as all the numbers should be unique.
Return a list of integers that represent a valid split containing a maximum number of integers. If no valid split exists for finalSum, return an empty list. You may return the integers in any order.
*/

class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
       vector<long long> result;
       int i=2,num=0;
       long long sum=0;
       if(finalSum%2==0)
       {
            while(sum<finalSum)
            {
                sum+=i;
                i+=2;
            }
            num=sum-finalSum;
            i=2;
            while(sum!=0)
            {
                if(num!=i)
                {
                    sum-=i;
                    result.push_back(i);
                    i+=2;
                }
                else
                {
                    sum-=i;
                    i+=2;
                }
            }
        }
 
       return result;
    }
};
