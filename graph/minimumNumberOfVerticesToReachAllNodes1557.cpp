/*
Given a directed acyclic graph, with n vertices numbered from 0 to n-1, and an array edges where edges[i] = [fromi, toi] represents a directed edge from node fromi to node toi.

Find the smallest set of vertices from which all nodes in the graph are reachable. It's guaranteed that a unique solution exists.

Notice that you can return the vertices in any order.
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
