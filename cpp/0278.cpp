/*
You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.
*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int bs(int n,int s,int e){
      int ans=e;  
     while(s<=e){
            int m=s+(e-s)/2;
         if(isBadVersion(m)==true){
             ans=m;
             e=m-1;
         }
         else {
             s=m+1;
         }
     }      
         return ans;
  }
  int exp_s(int n){
      if(isBadVersion(1)==true){
          return 1;
      }
      long i=1;
      while(i<n&&isBadVersion(i)==false){
          if(i*2>INT_MAX){
              i=n;
              break;
          }
            i*=2;
      }
      int min;
      if(i>n){
          min=n;
      }
      else{
          min=i;
      }
      return bs(n,i/2,min);
  }
    int firstBadVersion(int n) {

      int ans=exp_s(n);
      return ans;

    }
};
