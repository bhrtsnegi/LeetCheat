/*
You are given an array of variable pairs equations and an array of real numbers values, 
where equations[i] = [Ai, Bi] and values[i] represent the equation Ai / Bi = values[i]. Each Ai or Bi is a string that represents a single variable.
You are also given some queries, where queries[j] = [Cj, Dj] represents the jth query where you must find the answer for Cj / Dj = ?.
Return the answers to all queries. If a single answer cannot be determined, return -1.0.
Note: The input is always valid. You may assume that evaluating the queries will not result in division by zero and that there is no contradiction.
*/

class Solution
{
    unordered_map<string, vector<pair<string, double>>> adj;
    unordered_map<string, int> vis;

public:
    bool dfs(string node, string dest, double &prod)
    {
        if (node == dest)
            return true;

        vis[node] = 1;

        for (auto [v, w] : adj[node])
        {
            if (!vis[v] and dfs(v, dest, prod))
            {
                prod *= w;
                return true;
            }
        }

        return false;
    }

    vector<double> calcEquation(vector<vector<string>> &e, vector<double> &values, vector<vector<string>> &queries)
    {
        adj.clear();
        for (int i = 0; i < e.size(); i++)
        {
            adj[e[i][0]].push_back({e[i][1], values[i]});
            adj[e[i][1]].push_back({e[i][0], 1.0 / values[i]});
        }

        vector<double> ans;
        for (auto i : queries)
        {
            vis.clear();

            string src = i[0], dest = i[1];
            double prod = 1;

            if (adj.find(src) == adj.end() or adj.find(dest) == adj.end())
                ans.push_back(-1);
            else if (dfs(src, dest, prod))
                ans.push_back(prod);
            else
                ans.push_back(-1);
        }

        return ans;
    }
};
