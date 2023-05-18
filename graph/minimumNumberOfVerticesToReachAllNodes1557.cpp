/*

*/

#include<set>
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        //created a boolean array where every value is false at beginning
        vector<bool> check (n,false);

        
        for(int i = 0; i < edges.size(); i++)
        {
            check[edges[i][1]] = true;
        }

        vector<int> result;
        for(int i = 0; i < n; i++)
        {
            if(check[i] == false)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};
