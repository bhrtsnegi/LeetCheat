/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.
*/

class Solution {
public:

    void myCombinations(int ind, vector<int>& arr, int target, vector<vector<int>>& sol, vector<int> temp){
        if(target == 0){
            sol.push_back(temp);
            return;
        }
        for(int i = ind; i < arr.size(); i++){
            if(i>ind && arr[i] == arr[i-1])continue;
            if(arr[i] > target) break;
            temp.push_back(arr[i]);
            myCombinations(i+1, arr, target-arr[i], sol, temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> sol;
        vector<int> temp;
        myCombinations(0, candidates, target, sol, temp);
        return sol;
    }
};
