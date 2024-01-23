/*
You are given an array of strings arr. A string s is formed by the concatenation of a subsequence of arr that has unique characters.

Return the maximum possible length of s.

A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

*/

class Solution {
public:

    bool compare(vector<int>& vis, string& currStr){
          vector<int> selfCheck(26, 0);
        for (int i=0 ; i<currStr.size() ; i++){
            if (selfCheck[currStr[i]-'a'] == 1) return false;
            selfCheck[currStr[i]-'a'] = 1;
        }
        
        for (int i=0 ; i<currStr.size() ; i++){
            if (vis[currStr[i]-'a'] == 1) return false; 
        }
        return true;
    }
    
    int helper(int i, vector<string> &arr, vector<int> &vis, int len){
        //base cond
        if (i >= arr.size()){
            return len;
        }
        
        string currStr = arr[i];
        if (compare(vis, currStr) == false){
            return helper(i+1, arr, vis, len);
        }
        else {
            //pick
            for (int j=0 ; j<currStr.size() ; j++){
                vis[currStr[j]-'a'] = 1;
            }
            len += currStr.size();
            int op1 = helper(i+1, arr, vis, len);
            
            //not pick
            //backtrack the changes
            for (int j=0 ; j<currStr.size() ; j++){
                vis[currStr[j]-'a'] = 0;
            }
            len -= currStr.size();
            int op2 = helper(i+1, arr, vis, len);
            
            return max(op1, op2);
        }
    }
    
    int maxLength(vector<string>& arr) {
        vector<int> vis(26, 0);
        return helper(0, arr, vis, 0);
    }


};
