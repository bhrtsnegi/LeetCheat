/*
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
frequency
 of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.


*/

class Solution {
public:

    void myCombination(int ind, vector<int> &candidates, int target, vector<vector<int>> &sol, vector<int> &temp){
        if(ind == candidates.size()){
            if(target == 0){
                sol.push_back(temp);
            }
            return;
        }
        if(candidates[ind] <= target){
            temp.push_back(candidates[ind]);
            myCombination(ind, candidates, target-candidates[ind], sol, temp);
            temp.pop_back();
        }
        myCombination(ind+1, candidates, target, sol, temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> sol;
        vector<int> temp;
        myCombination(0, candidates, target, sol, temp);
        return sol;
    }
};
