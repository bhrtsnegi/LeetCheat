/*
Given a positive integer n, find the smallest integer which has exactly the same digits existing in the integer n and is greater in value than n. If no such positive integer exists, return -1.

Note that the returned integer should fit in 32-bit integer, if there is a valid answer but it does not fit in 32-bit integer, return -1.
*/

class Solution {
public:
    int nextGreaterElement(int n) {
        string nums = to_string(n);
        int len = nums.size();
        int deflection = -1, greater = -1;
        int maxi = nums[len-1] - '0';

        for(int i = len-2; i >= 0; i--){
            if(nums[i]-'0' < maxi){
                deflection = i;
                break;
            }
            maxi = nums[i]-'0';
        } 
        if(deflection == -1) return -1;
        
        int min = 10;

        for(int i = deflection+1; i < len; i++){
            if(nums[i]-'0' > nums[deflection]-'0' && nums[i]-'0' < min){
                min = nums[i]-'0';
                greater = i;
            }
        }
        if(greater == -1) return -1;

        swap(nums[deflection], nums[greater]);
        sort(nums.begin()+deflection+1, nums.end());

        long long ans = stoll(nums);
        return (ans>INT_MAX) ? -1 : ans;
    }
};
