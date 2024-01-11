/*
You are given a 0-indexed integer array costs where costs[i] is the cost of hiring the ith worker.

You are also given two integers k and candidates. We want to hire exactly k workers according to the following rules:

You will run k sessions and hire exactly one worker in each session.
In each hiring session, choose the worker with the lowest cost from either the first candidates workers or the last candidates workers. Break the tie by the smallest index.
For example, if costs = [3,2,7,7,1,2] and candidates = 2, then in the first hiring session, we will choose the 4th worker because they have the lowest cost [3,2,7,7,1,2].
In the second hiring session, we will choose 1st worker because they have the same lowest cost as 4th worker but they have the smallest index [3,2,7,7,2]. Please note that the indexing may be changed in the process.
If there are fewer than candidates workers remaining, choose the worker with the lowest cost among them. Break the tie by the smallest index.
A worker can only be chosen once.
Return the total cost to hire exactly k workers.
*/

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue <int, vector<int>, greater<int> > leftRow;
        priority_queue <int, vector<int>, greater<int> > rightRow;
        int leftEnd=candidates-1;
        int rightEnd=costs.size()-candidates;
        long long sum=0;
        if(k==costs.size())
        {
            for(int i=0; i<costs.size(); i++)
            {
                sum+=costs[i];
            }
            return sum;
        }
        //left elements in priority min heap
        for(int i=0; i<=leftEnd; i++)
            leftRow.push(costs[i]);
        //right elements in priority min heap
        for(int i=rightEnd; i<costs.size(); i++)
        {
            //to check if array has less elements then candidate*2
            if(i<=leftEnd)
            {
                i=leftEnd;
                continue;
            }
            rightRow.push(costs[i]);
        }

        // to add minimum salary 
        while(k!=0)
        {
            if((rightRow.empty() || leftRow.top()<=rightRow.top()) && !leftRow.empty() )
            {
                sum+=leftRow.top();
                leftRow.pop();
                leftEnd++;
                if(leftEnd<rightEnd)
                    leftRow.push(costs[leftEnd]);
            }
            else
            {
                sum+=rightRow.top();
                rightRow.pop();
                rightEnd--;
                if(leftEnd<rightEnd)
                    rightRow.push(costs[rightEnd]);
            }
            k--;
        }
        return sum;
    }
};
