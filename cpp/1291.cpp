/*
An integer has sequential digits if and only if each digit in the number is one more than the previous digit.

Return a sorted list of all the integers in the range [low, high] inclusive that have sequential digits.
*/

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue <int> q;

        for(int i = 1; i <= 9; i++)
            q.push(i);
            
        vector<int> ans;

        while(!q.empty()){
            int num = q.front();

            q.pop();

            if(num >= low && num <= high)
                ans.push_back(num);

            if(num%10 < 9){
                int rem = num%10;
                q.push(num*10+rem+1);
            }
        }
        return ans;
    }
};
