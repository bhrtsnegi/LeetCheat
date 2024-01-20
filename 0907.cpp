/*
Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr. Since the answer may be large, return the answer modulo 109 + 7.
*/

#define mod 1000000007
class Solution
{
    public:
        int sumSubarrayMins(vector<int> &arr) {
            int n = arr.size();
            vector<int> left(n,0), right(n,0);
            stack<pair<int, int>> sLeft, sRight;

            for(int i = 0; i < n; i++){
                int count = 1;
                while(!sLeft.empty() && sLeft.top().first > arr[i]){
                    count += sLeft.top().second;
                    sLeft.pop();
                }
                sLeft.push({arr[i], count});
                left[i] = count;
            }

            for(int i = n-1; i >= 0; i--){
                int count = 1;
                while(!sRight.empty() &&  sRight.top().first >= arr[i]){
                    count += sRight.top().second;
                    sRight.pop();
                }
                sRight.push({arr[i], count});
                right[i] = count;
            }

            int ans = 0;
            for(int i = 0; i < n; i++){
                ans = (ans + (arr[i] * (long long)(left[i] * right[i])%mod)%mod)%mod;
            }
            return ans;
        }
};
